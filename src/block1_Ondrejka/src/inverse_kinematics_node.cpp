#include "rclcpp/rclcpp.hpp"
#include "rrm_msgs/srv/command.hpp"
#include "ondrejka_interface/srv/inverse_kinematics.hpp"
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>

// rrm blok1 - ondrejka
// manager co riesi koordinaciu a hlavne tu hnusnu matiku pre 4 riesenia
class MotionManager : public rclcpp::Node {
public:
    MotionManager() : Node("motion_manager") {
        sim_client_ = this->create_client<rrm_msgs::srv::Command>("/move_command");

        srv_ = this->create_service<ondrejka_interface::srv::InverseKinematics>(
            "calculate_ik", 
            std::bind(&MotionManager::handle_ik, this, std::placeholders::_1, std::placeholders::_2)
        );

        // limity z pdfka - toto musim kontrolovat lebo matika vypluje hocico
        min_lim = {-3.14, -1.57, -2.5}; 
        max_lim = { 3.14,  1.57,  2.5};

        RCLCPP_INFO(this->get_logger(), "start...");
    }

private:
    std::vector<double> min_lim, max_lim;

    void handle_ik(const std::shared_ptr<ondrejka_interface::srv::InverseKinematics::Request> req,
                   std::shared_ptr<ondrejka_interface::srv::InverseKinematics::Response> res) {
        
        RCLCPP_INFO(this->get_logger(), "idem na: %.2f %.2f %.2f", req->x, req->y, req->z);

        double L1 = 0.5, L2 = 0.4, L3 = 0.3; // rozmery robota
        std::vector<std::vector<double>> vsetky;

        // --- POCITAME 4 KONFIGURACIE ---
        // robot ma 2 sposoby ako natocit zakladnu (front/back) 
        // a pre kazdy moze mat laket hore alebo dole (up/down) -> 2*2 = 4 riesenia
        
        double q0_f = std::atan2(req->y, req->x); // klasika dopredu
        double q0_b = (q0_f > 0) ? q0_f - M_PI : q0_f + M_PI; // otoceny o 180 stupnov

        double q0_moznosti[2] = {q0_f, q0_b};

        for (double q0 : q0_moznosti) {
            double r = std::sqrt(req->x*req->x + req->y*req->y);
            
            // ak je otoceny dozadu (back), musim v matike uvazovat zaporny polomer 
            // inak by mi q1 a q2 vysli blbo pre tu opacnu stranu
            if (std::abs(q0 - q0_f) > 0.1) r = -r; 

            double zp = req->z - L1; // posun kvoli vyske prveho klbu
            double d2 = r*r + zp*zp;
            double d = std::sqrt(d2);

            // ak je to dalej ako sucet ramien, tak tam proste nedociahnem
            if (d > (L2 + L3 + 0.001)) continue; 

            // kosinova veta pre q2 (uhol v lakti)
            // clamp tam mam preto aby acos nehodil chybu ak vyjde kvoli zaokruhleniu 1.000001
            double cos_q2 = (d2 - L2*L2 - L3*L3) / (2 * L2 * L3);
            double q2_val = std::acos(std::clamp(cos_q2, -1.0, 1.0));

            // riesenie LAKET DOLE (q2 je kladne)
            double q2_d = q2_val;
            double q1_d = std::atan2(zp, r) - std::atan2(L3 * std::sin(q2_d), L2 + L3 * std::cos(q2_d));
            vsetky.push_back({q0, q1_d, q2_d});

            // riesenie LAKET HORE (q2 je zaporne)
            double q2_u = -q2_val;
            double q1_u = std::atan2(zp, r) - std::atan2(L3 * std::sin(q2_u), L2 + L3 * std::cos(q2_u));
            vsetky.push_back({q0, q1_u, q2_u});
        }

        // --- FILTRACIA ---
        // nie vsetko co vyjde z matiky robot realne da kvoli limitom
        std::vector<std::vector<double>> ok_riesenia;
        std::cout << "\n--- kontrola 4 moznosti ---" << std::endl;

        for (size_t i = 0; i < vsetky.size(); ++i) {
            bool ok = true;
            for(int j=0; j<3; j++) {
                // kontrolujem kazdy jeden klb ci je v intervale z pdfka
                if(vsetky[i][j] < min_lim[j] || vsetky[i][j] > max_lim[j]) ok = false;
            }

            std::cout << i+1 << ". [" << vsetky[i][0] << ", " << vsetky[i][1] << ", " << vsetky[i][2] 
                      << "] -> " << (ok ? "v limitoch" : "mimo limitov") << std::endl;

            if (ok) ok_riesenia.push_back(vsetky[i]);
        }

        // ak po filtracii nezostalo nic, smola
        if (ok_riesenia.empty()) {
            res->success = false;
            res->message = "ziadne riesenie nepreslo cez limity";
            return;
        }

        // --- VYBER NAJLEPSIEHO ---
        // vyberam to co ma najmensiu "vzdialenost" od nuly (suma stvorcov)
        // aby robot nerobil zbytocne velke pohyby ak nemusi
        auto best = std::min_element(ok_riesenia.begin(), ok_riesenia.end(), [](const auto& a, const auto& b) {
            return (a[0]*a[0] + a[1]*a[1] + a[2]*a[2]) < (b[0]*b[0] + b[1]*b[1] + b[2]*b[2]);
        });
        
        std::vector<double> vysledok = *best;
        std::cout << "vyberam: " << vysledok[0] << " " << vysledok[1] << " " << vysledok[2] << std::endl;

        // posielam prikaz do simulatora
        if (!sim_client_->wait_for_service(std::chrono::seconds(1))) {
            res->success = false;
            res->message = "sim nebezi";
            return;
        }

        auto sim_req = std::make_shared<rrm_msgs::srv::Command::Request>();
        sim_req->positions = vysledok;
        sim_req->velocities = {1.0, 1.0, 1.0}; // rychlosti musia byt tiez inak sim strajkuje

        auto fut = sim_client_->async_send_request(sim_req);

        if (fut.wait_for(std::chrono::seconds(2)) == std::future_status::ready) {
            res->success = true;
            res->angles = vysledok; 
            res->message = "ok";
        } else {
            res->success = false;
            res->message = "timeout simulatora";
        }
    }

    rclcpp::Service<ondrejka_interface::srv::InverseKinematics>::SharedPtr srv_;
    rclcpp::Client<rrm_msgs::srv::Command>::SharedPtr sim_client_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotionManager>());
    rclcpp::shutdown();
    return 0;
}