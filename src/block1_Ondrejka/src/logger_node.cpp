#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "rrm_msgs/msg/command.hpp"
#include "ondrejka_interface/srv/my_service.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

/**
 * @brief External helper function for file operations.
 * Complies with assignment requirements to keep file I/O logic separate from Teleop.
 */
void write_to_trajectory_file(int id, const std::vector<double>& pos, double vel) {
    // Overwrite file if ID is 0, otherwise append
    std::ios_base::openmode mode = (id == 0) ? std::ios::trunc : std::ios::app;
    std::ofstream file("trajectory.txt", mode);
    
    if (file.is_open()) {
        file << id << " ";
        for (size_t i = 0; i < 3; ++i) {
            file << std::fixed << std::setprecision(3) << (i < pos.size() ? pos[i] : 0.0) << " ";
        }
        file << std::fixed << std::setprecision(3) << vel << "\n";
        file.close();
    }
}

class JointLogger : public rclcpp::Node {
public:
    JointLogger() : Node("joint_logger"), point_counter_(0), last_msg_("Waiting for data...") {
        sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, std::bind(&JointLogger::js_cb, this, std::placeholders::_1));
        
        pub_ = this->create_publisher<rrm_msgs::msg::Command>("move_command", 10);

        srv_ = this->create_service<ondrejka_interface::srv::MyService>(
            "my_service", std::bind(&JointLogger::srv_cb, this, std::placeholders::_1, std::placeholders::_2));
        
        render_ui();
    }

private:
    /**
     *Visualizes telemetry and logging status in the terminal.
     */
    void render_ui() {
        std::cout << "\033[H\033[J";
        std::cout << "┌──────────────────────────────────────────────────┐" << std::endl;
        std::cout << "│        CENTRAL LOGGING & TRAJECTORY UNIT         │" << std::endl;
        std::cout << "├──────────────────────────────────────────────────┤" << std::endl;
        std::cout << "│ LIVE TELEMETRY (Joint States):                   │" << std::endl;
        
        if (last_js_.size() >= 3) {
            std::cout << "│  J0: " << std::fixed << std::setprecision(1) << std::setw(5) << last_js_[0] 
                      << "    | J1: " << std::setw(5) << last_js_[1] 
                      << "    | J2: " << std::setw(5) << last_js_[2] << "         │" << std::endl;
        } else {
            std::cout << "│  J0:  N/A    | J1:  N/A    | J2:  N/A    │" << std::endl;
        }

        std::cout << "├──────────────────┬───────────────────────────────┤" << std::endl;
        std::cout << "│ Saved Points: " << std::setw(2) << point_counter_ << " │ Log File: " << std::left << std::setw(19) << "trajectory.txt" << " │" << std::endl;
        std::cout << "├──────────────────┴───────────────────────────────┤" << std::endl;
        std::cout << "│ LOG MESSAGES:                                    │" << std::endl;
        std::cout << "│ " << std::left << std::setw(48) << last_msg_.substr(0, 48) << " │" << std::endl;
        std::cout << "└──────────────────────────────────────────────────┘" << std::endl;
    }

    /**
     * @brief Service callback handling save requests and trajectory playback.
     */
    void srv_cb(const std::shared_ptr<ondrejka_interface::srv::MyService::Request> req,
                std::shared_ptr<ondrejka_interface::srv::MyService::Response> res) {
        if (req->save) {
            // Logic for saving current robot position
            if (!last_js_.empty()) {
                write_to_trajectory_file(point_counter_++, last_js_, req->velocity);
                last_msg_ = "Successfully saved point #" + std::to_string(point_counter_-1);
                res->result = true;
                res->message = "Point logged to file.";
            } else {
                last_msg_ = "Error: Joint state feedback missing.";
                res->result = false;
                res->message = "Failed to obtain joint data.";
            }
        } else {
            // Logic for trajectory playback (Bonus Task)
            last_msg_ = "Initiating playback sequence...";
            render_ui();
            
            std::ifstream file("trajectory.txt");
            if (!file.is_open()) {
                last_msg_ = "Error: Trajectory file missing.";
                res->result = false;
                res->message = "Trajectory file not found.";
                return;
            }

            int id; double p0, p1, p2, v;
            while (file >> id >> p0 >> p1 >> p2 >> v) {
                std::vector<double> pts = {p0, p1, p2};
                for (size_t i = 0; i < pts.size(); ++i) {
                    auto msg = rrm_msgs::msg::Command();
                    msg.joint_id = static_cast<int>(i);
                    msg.position = pts[i];
                    pub_->publish(msg);
                }
                last_msg_ = "Executing Point ID: " + std::to_string(id);
                render_ui();
                rclcpp::sleep_for(std::chrono::milliseconds(1500));
            }
            file.close();
            last_msg_ = "Trajectory playback finished.";
            res->result = true;
            res->message = "Playback completed successfully.";
        }
        render_ui();
    }

    void js_cb(const sensor_msgs::msg::JointState::SharedPtr msg) { 
        last_js_ = msg->position; 
        render_ui(); 
    }

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr sub_;
    rclcpp::Publisher<rrm_msgs::msg::Command>::SharedPtr pub_;
    rclcpp::Service<ondrejka_interface::srv::MyService>::SharedPtr srv_;
    std::vector<double> last_js_;
    int point_counter_;
    std::string last_msg_;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointLogger>());
    rclcpp::shutdown();
    return 0;
}