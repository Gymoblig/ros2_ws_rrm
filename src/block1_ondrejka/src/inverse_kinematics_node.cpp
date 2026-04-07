#include "rclcpp/rclcpp.hpp"
#include "ondrejka_interface/srv/inverse_kinematics.hpp"
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <rclcpp/parameter_client.hpp>
#include <urdf/model.h>

// --- RRM Assignment 1 - Ondrejka ---
// Uzol IKSolver: Počíta inverznú kinematiku pre 3-osé robotické rameno
class IKSolver : public rclcpp::Node {
public:
    IKSolver() : Node("ik_solver") {
        // Reentrant skupina umožňuje, aby uzol spracovával sťahovanie parametrov a servis súčasne
        callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);

        // Vytvorenie servisu, ktorý počúva na "calculate_ik"
        srv_ = this->create_service<ondrejka_interface::srv::InverseKinematics>(
            "calculate_ik", 
            std::bind(&IKSolver::handle_ik, this, std::placeholders::_1, std::placeholders::_2),
            rclcpp::ServicesQoS(),
            callback_group_
        );

        // Základné limity (v radiánoch) pre prípad, že robot_state_publisher nebeží
        min_lim = {-1.62, -0.96, -0.96}; 
        max_lim = { 1.62,  2.182,  2.182};

        RCLCPP_INFO(this->get_logger(), "IK Solver inicializovany. Cakam na limity z main...");
    }

    // Funkcia na parsovanie URDF a extrakciu limitov kĺbov (joint1, joint2, joint3)
    void update_limits_from_urdf(const std::string& urdf_xml) {
        urdf::Model model;
        if (model.initString(urdf_xml)) {
            auto j1 = model.getJoint("joint1");
            auto j2 = model.getJoint("joint2");
            auto j3 = model.getJoint("joint3");

            if (j1 && j2 && j3 && j1->limits && j2->limits && j3->limits) {
                min_lim = {j1->limits->lower, j2->limits->lower, j3->limits->lower};
                max_lim = {j1->limits->upper, j2->limits->upper, j3->limits->upper};
                RCLCPP_INFO(this->get_logger(), "Limity uspesne aktualizovane z URDF.");
            }
        }
    }

private:
    void handle_ik(const std::shared_ptr<ondrejka_interface::srv::InverseKinematics::Request> req,
                   std::shared_ptr<ondrejka_interface::srv::InverseKinematics::Response> res) {
        
        RCLCPP_INFO(this->get_logger(), "--- Nova poziadavka: [%.2f, %.2f, %.2f] ---", req->x, req->y, req->z);

        // Geometrické parametre ramena (dĺžky článkov)
        double L1 = 0.0; double L2 = 0.203; double L3 = 0.203; 
        std::vector<std::vector<double>> all_solutions;

        // 1. VÝPOČET q0 (Základňa): Pohľad zhora na rovinu XY
        // atan2 počíta uhol k bodu [x, y]. Existujú dve riešenia: priamo k bodu a "odvrátené" (otočenie o 180 stupňov)
        double q0_f = std::atan2(req->y, req->x); 
        double q0_b = (q0_f > 0) ? q0_f - M_PI : q0_f + M_PI;
        double q0_options[2] = {q0_f, q0_b};

        for (double q0 : q0_options) {
            // r je vzdialenosť bodu od osi rotácie základne v rovine XY
            double r = std::sqrt(req->x*req->x + req->y*req->y);
            
            // Ak počítame pre "odvrátené" riešenie (backwards), r musí byť záporné pre výpočet ramena
            if (std::abs(q0 - q0_f) > 0.1) r = -r; 
            
            double zp = req->z - L1;            // Vertikálny posun (tu L1 = 0)
            double d2 = r*r + zp*zp;            // Štvorec vzdialenosti od kĺbu 2 po koncový bod
            double d = std::sqrt(d2);           // Priama vzdialenosť (prepona)

            // Kontrola dosahu: Ak je bod ďalej ako súčet dĺžok článkov, riešenie neexistuje
            if (d > (L2 + L3 + 0.001)) continue; 

            // 2. VÝPOČET q2 (Lakeť) pomocou Kosínusovej vety: d^2 = L2^2 + L3^2 - 2*L2*L3*cos(180-q2)
            double cos_q2 = (d2 - L2*L2 - L3*L3) / (2 * L2 * L3);
            // Clamp zabezpečí, že kvôli presnosti floatov nevyjdeme z intervalu [-1, 1] pre acos
            double q2_val = std::acos(std::clamp(cos_q2, -1.0, 1.0));

            // 3. VÝPOČET q1 (Rameno): Rozdiel uhla k prepone d a vnútorného uhla v trojuholníku
            // q1 = atan2(r, zp) - beta, kde beta je uhol vypočítaný z geometrie ramena
            
            // Konfigurácia "Elbow down"
            all_solutions.push_back({q0, std::atan2(r, zp) - std::atan2(L3 * std::sin(q2_val), L2 + L3 * std::cos(q2_val)), q2_val});
            
            // Konfigurácia "Elbow up" (negatívne q2)
            all_solutions.push_back({q0, std::atan2(r, zp) - std::atan2(L3 * std::sin(-q2_val), L2 + L3 * std::cos(-q2_val)), -q2_val});
        }

        // 4. FILTROVANIE: Matematika nájde 4 riešenia, ale my musíme vybrať tie, ktoré robot fyzicky dokáže
        std::vector<std::vector<double>> ok_solutions;
        std::cout << "Analýza riešení (Joint Limits: q1[" << min_lim[0] << "," << max_lim[0] << "], ...)" << std::endl;
        
        for (size_t i = 0; i < all_solutions.size(); ++i) {
            bool is_ok = true;
            for(int j = 0; j < 3; j++) {
                // Kontrola či uhol kĺbu i spadá do limitov z URDF
                if(all_solutions[i][j] < min_lim[j] || all_solutions[i][j] > max_lim[j]) {
                    is_ok = false;
                }
            }

            printf(" %zu. [%6.3f, %6.3f, %6.3f] -> %s\n", 
                   i+1, all_solutions[i][0], all_solutions[i][1], all_solutions[i][2], 
                   (is_ok ? "VALID" : "INVALID (Mimo limitov)"));

            if (is_ok) ok_solutions.push_back(all_solutions[i]);
        }

        // Ak žiadne z matematických riešení nevyhovuje limitom (napr. kĺb by sa musel pretočiť)
        if (ok_solutions.empty()) {
            res->success = false;
            res->message = "Ziadne riešenie nevyhovuje limitom.";
            RCLCPP_WARN(this->get_logger(), "Bod je mimo reachu.");
            return;
        }

        // 5. VÝBER NAJLEPŠIEHO: Z platných riešení vyberieme to, ktoré vyžaduje najmenší pohyb
        // Minimalizujeme sumu štvorcov uhlov (najbližšie k nulovej/domovskej polohe)
        auto best = std::min_element(ok_solutions.begin(), ok_solutions.end(), [](const auto& a, const auto& b) {
            return (a[0]*a[0] + a[1]*a[1] + a[2]*a[2]) < (b[0]*b[0] + b[1]*b[1] + b[2]*b[2]);
        });
        
        std::cout << "Vybrané riešenie (najkratšia cesta): [" << (*best)[0] << ", " << (*best)[1] << ", " << (*best)[2] << "]" << std::endl;

        res->success = true;
        res->angles = *best;
        res->message = "OK";
    }

    std::vector<double> min_lim, max_lim;
    rclcpp::Service<ondrejka_interface::srv::InverseKinematics>::SharedPtr srv_;
    rclcpp::CallbackGroup::SharedPtr callback_group_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<IKSolver>();
    
    // Používame MultiThreadedExecutor, aby sme mohli sťahovať parametre počas behu
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);

    // ASYNCHRÓNNE SŤAHOVANIE URDF: Aby sme predišli deadlocku, stiahneme URDF pred spustením hlavného spinu
    auto parameters_client = std::make_shared<rclcpp::AsyncParametersClient>(node, "robot_state_publisher");
    
    RCLCPP_INFO(node->get_logger(), "Cakam na robot_state_publisher...");
    if (parameters_client->wait_for_service(std::chrono::seconds(5))) {
        auto future = parameters_client->get_parameters({"robot_description"});
        
        // Spinujeme len do momentu, kým nepríde odpoveď s URDF stringom
        if (executor.spin_until_future_complete(future) == rclcpp::FutureReturnCode::SUCCESS) {
            auto params = future.get();
            if (!params.empty()) {
                node->update_limits_from_urdf(params[0].as_string());
            }
        }
    } else {
        RCLCPP_WARN(node->get_logger(), "Nepodarilo sa pripojit k publisheru. Pouzivam defaultne limity.");
    }

    // Spustenie hlavnej slučky - uzol teraz čaká na requesty z Motion Managera
    RCLCPP_INFO(node->get_logger(), "IK Solver bezi a caka na poziadavky.");
    executor.spin();

    rclcpp::shutdown();
    return 0;
}