#include "rclcpp/rclcpp.hpp"
#include "rrm_msgs/srv/command.hpp"
#include "ondrejka_interface/srv/inverse_kinematics.hpp"
#include <chrono>
#include <thread>
#include <iostream>
#include <future>
#include <limits>

using namespace std::chrono_literals;

// --- RRM Assignment 1 - Ondrejka ---
// Uzol MotionManager: Orchestrátor, ktorý spája užívateľský vstup, IK výpočty a simulátor.
class MotionManager : public rclcpp::Node {
public:
    MotionManager() : Node("motion_manager") {
        // 1. INICIALIZÁCIA CALLBACK GRUPY (Reentrant)
        // Toto je kľúčové: Reentrant skupina dovoľuje uzlu vykonávať viac vecí naraz.
        // Bez nej by čakanie na odpoveď zo servisu zablokovalo celý uzol (deadlock).
        cb_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);

        // 2. KLIENTI SLUŽIEB
        // ik_client: Komunikuje s IK Solverom na výpočet uhlov kĺbov.
        ik_client_ = this->create_client<ondrejka_interface::srv::InverseKinematics>(
            "calculate_ik", 
            rclcpp::ServicesQoS(), 
            cb_group_
        );

        // sim_client: Posiela výsledné uhly do simulátora robota 
        sim_client_ = this->create_client<rrm_msgs::srv::Command>(
            "/move_command", 
            rclcpp::ServicesQoS(), 
            cb_group_
        );

        // 3. MULTI-THREADING: Samostatné vlákno na konzolu
        // ROS 2 štandardne blokuje vlákno pri príkaze 'std::cin'. 
        // Preto vytvárame vlastné vlákno, aby sme mohli písať do konzoly a ROS mohol stále "spinovať".
        input_thread_ = std::thread(&MotionManager::user_input_loop, this);
        
        RCLCPP_INFO(this->get_logger(), "Filharmonia pripravena. Zadaj suradnice:");
    }

    ~MotionManager() {
        // Čisté ukončenie: Počkáme, kým sa vlákno s konzolou bezpečne ukončí.
        if (input_thread_.joinable()) input_thread_.join();
    }

private:
    // Slučka, ktorá beží v separátnom vlákne a čaká na X Y Z
    void user_input_loop() {
        std::this_thread::sleep_for(1s);

        while (rclcpp::ok()) {
            double x, y, z;
            std::cout << "\n----------------------------" << std::endl;
            std::cout << "ZADAJ CIEL (format: x y z): ";
            
            // Základné ošetrenie chýb vstupu (ak niekto zadá písmená namiesto čísel)
            if (!(std::cin >> x >> y >> z)) {
                std::cout << "Neplatny vstup, skus znova." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            // Keď máme súradnice, spustíme proces pohybu
            process_movement(x, y, z);
        }
    }

    // Hlavná logika spracovania požiadavky
    void process_movement(double x, double y, double z) {
        RCLCPP_INFO(this->get_logger(), "Spracovavam poziadavku na [%.2f, %.2f, %.2f]", x, y, z);

        // --- KROK 1: VOLANIE IK SOLVERA ---
        // Najprv zistíme, či solver vôbec v sieti ROS existuje
        if (!ik_client_->wait_for_service(1s)) {
            RCLCPP_ERROR(this->get_logger(), "IK Solver nenasiel (Service not available).");
            return;
        }

        // Naplníme request súradnicami cieľa
        auto ik_req = std::make_shared<ondrejka_interface::srv::InverseKinematics::Request>();
        ik_req->x = x; ik_req->y = y; ik_req->z = z;

        // Asynchrónne pošleme žiadosť a čakáme na výsledok (budúcnosť/future)
        auto ik_future = ik_client_->async_send_request(ik_req);

        // Čakáme max 10 sekúnd na výpočet. Ak solver padol, nenecháme manažéra zamrznúť.
        if (ik_future.wait_for(10s) != std::future_status::ready) {
            RCLCPP_ERROR(this->get_logger(), "IK Solver neodpoveda (Timeout).");
            return;
        }

        // Spracovanie výsledku zo solvera
        auto ik_res = ik_future.get();
        if (!ik_res->success || ik_res->angles.empty()) {
            RCLCPP_WARN(this->get_logger(), "Solver zamietol: %s", ik_res->message.c_str());
            return;
        }

        // --- KROK 2: POSLANIE DO SIMULÁTORA ---
        // Ak máme platné uhly, pošleme ich do simulátora, aby sa robot pohol
        if (!sim_client_->wait_for_service(1s)) {
            RCLCPP_ERROR(this->get_logger(), "Simulator /move_command nebezi!");
            return;
        }

        auto sim_req = std::make_shared<rrm_msgs::srv::Command::Request>();
        sim_req->positions = ik_res->angles;   // Uhly zo solvera
        sim_req->velocities = {0.5, 0.5, 0.5}; // Nastavená konštantná rýchlosť

        auto sim_future = sim_client_->async_send_request(sim_req);

        RCLCPP_INFO(this->get_logger(), "Poslane do simulatora, cakam na dojazd...");

        // Blokujúce čakanie na potvrdenie, že simulátor pohyb dokončil
        if (sim_future.wait_for(15s) == std::future_status::ready) {
            RCLCPP_INFO(this->get_logger(), "POHYB OK! Robot uspesne v cieli.");
        } else {
            RCLCPP_ERROR(this->get_logger(), "Simulator neodpovedal vcas.");
        }
    }

    rclcpp::CallbackGroup::SharedPtr cb_group_;
    std::thread input_thread_;
    rclcpp::Client<ondrejka_interface::srv::InverseKinematics>::SharedPtr ik_client_;
    rclcpp::Client<rrm_msgs::srv::Command>::SharedPtr sim_client_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MotionManager>();

    // MultiThreadedExecutor: Rozdelí prácu uzla do viacerých vlákien.
    // Jedno vlákno spracováva konzolu, druhé odpovede zo služieb.
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    
    executor.spin(); // Tu sa spúšťa spracovanie všetkých udalostí
    
    rclcpp::shutdown();
    return 0;
}