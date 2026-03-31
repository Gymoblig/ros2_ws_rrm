#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "ondrejka_interface/srv/my_service.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

// Eigen na matice, tf2 na posielanie suradnic do Rvizu
#include <Eigen/Geometry>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2/LinearMath/Quaternion.h>

// funkcia na zapis do suboru - id 0 maze subor, ostatne pridavaju
void zapis_do_suboru(int id, const std::vector<double>& pos, double vel) {
    std::ios_base::openmode mode = (id == 0) ? std::ios::trunc : std::ios::app;
    std::ofstream f("trajectory.txt", mode);
    
    if (f.is_open()) {
        f << id << " ";
        for (size_t i = 0; i < 3; ++i) {
            f << std::fixed << std::setprecision(3) << (i < pos.size() ? pos[i] : 0.0) << " ";
        }
        f << std::fixed << std::setprecision(3) << vel << "\n";
        f.close();
    }
}

class JointLogger : public rclcpp::Node {
public:
    JointLogger() : Node("joint_logger"), point_counter_(0), last_msg_("Cakam na data...") {
        tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

        // pocuvam joint_states zo simulatora
        sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, std::bind(&JointLogger::js_cb, this, std::placeholders::_1));
        
        // sluzba na ukladanie bodov do txt
        srv_ = this->create_service<ondrejka_interface::srv::MyService>(
            "my_service", std::bind(&JointLogger::srv_cb, this, std::placeholders::_1, std::placeholders::_2));
        
        current_pos_fk_ = Eigen::Vector3d::Zero();
    }

private:
    // pomocna funkcia pre Denavit-Hartenberg transformaciu
    Eigen::Matrix4d get_transform(double theta, double d, double a, double alpha) {
        Eigen::Matrix4d A;
        A << cos(theta), -sin(theta) * cos(alpha),  sin(theta) * sin(alpha), a * cos(theta),
             sin(theta),  cos(theta) * cos(alpha), -cos(theta) * sin(alpha), a * sin(theta),
             0,           sin(alpha),               cos(alpha),              d,
             0,           0,                        0,                       1;
        return A;
    }

    Eigen::Vector3d current_pos_fk_;
    std::vector<double> last_js_;

    void js_cb(const sensor_msgs::msg::JointState::SharedPtr msg) { 
        last_js_ = msg->position; 
        
        if (last_js_.size() >= 3) {
            // FK vypocet podla DH parametrov zo zadania
            // L1=0.5, L2=0.4, L3=0.3
            Eigen::Matrix4d A1 = get_transform(last_js_[0], 0.5, 0.0, M_PI_2);
            Eigen::Matrix4d A2 = get_transform(last_js_[1], 0.0, 0.4, 0.0);
            Eigen::Matrix4d A3 = get_transform(last_js_[2], 0.0, 0.3, 0.0);

            // vysledna matica T03
            Eigen::Matrix4d T03 = A1 * A2 * A3;

            // posielam do tf2 nech to vidim v Rviz (tool0_calculated)
            geometry_msgs::msg::TransformStamped t;
            t.header.stamp = this->get_clock()->now();
            t.header.frame_id = "base_link";
            t.child_frame_id = "tool0_calculated";

            t.transform.translation.x = T03(0, 3);
            t.transform.translation.y = T03(1, 3);
            t.transform.translation.z = T03(2, 3);

            // prevod rotacnej matice na kvaternion
            Eigen::Quaterniond q(T03.block<3, 3>(0, 0));
            t.transform.rotation.x = q.x();
            t.transform.rotation.y = q.y();
            t.transform.rotation.z = q.z();
            t.transform.rotation.w = q.w();

            tf_broadcaster_->sendTransform(t);
            current_pos_fk_ = T03.block<3, 1>(0, 3);
        }
        
        render_ui(); 
    }

    // vykreslovanie do konzoly (tu pouzivam kitty clear)
    void render_ui() {
        std::system("clear");
        std::cout << "┌──────────────────────────────────────────────────┐" << std::endl;
        std::cout << "│      LOGGER A DOPREDNA KINEMATIKA (Ondrejka)     │" << std::endl;
        std::cout << "├──────────────────────────────────────────────────┤" << std::endl;
        
        std::cout << "│ AKTUALNE UHLY (z /joint_states):                 │" << std::endl;
        if (last_js_.size() >= 3) {
            std::cout << "│  q0: " << std::fixed << std::setprecision(3) << std::setw(6) << last_js_[0] 
                    << " | q1: " << std::setw(6) << last_js_[1] 
                    << " | q2: " << std::setw(6) << last_js_[2] << "            │" << std::endl;
        } else {
            std::cout << "│  Cakam na data zo simulatora...                  │" << std::endl;
        }

        std::cout << "├──────────────────────────────────────────────────┤" << std::endl;
        std::cout << "│ VYPOČÍTANÝ EFEKTOR (FK cez Eigen):               │" << std::endl;
        std::cout << "│  X: " << std::setw(8) << current_pos_fk_.x() << " m                                   │" << std::endl;
        std::cout << "│  Y: " << std::setw(8) << current_pos_fk_.y() << " m                                   │" << std::endl;
        std::cout << "│  Z: " << std::setw(8) << current_pos_fk_.z() << " m                                   │" << std::endl;

        std::cout << "├──────────────────┬───────────────────────────────┤" << std::endl;
        std::cout << "│ Body: " << std::left << std::setw(10) << point_counter_ << " │ Subor: trajectory.txt         │" << std::endl;
        std::cout << "├──────────────────┴───────────────────────────────┤" << std::endl;
        // osetrenie dlzky spravy aby to nerozbilo tabulku
        std::string msg_sub = (last_msg_.length() > 34) ? last_msg_.substr(0, 31) + "..." : last_msg_;
        std::cout << "│ STATUS: " << std::left << std::setw(40) << msg_sub << " │" << std::endl;
        std::cout << "└──────────────────────────────────────────────────┘" << std::endl;
    }

    void srv_cb(const std::shared_ptr<ondrejka_interface::srv::MyService::Request> req,
                std::shared_ptr<ondrejka_interface::srv::MyService::Response> res) {
        if (req->save) {
            if (!last_js_.empty()) {
                zapis_do_suboru(point_counter_++, last_js_, req->velocity);
                last_msg_ = "Ulozeny bod #" + std::to_string(point_counter_-1);
                res->result = true;
                res->message = "Ulozene.";
            } else {
                last_msg_ = "Chyba: nemam data z klbov";
                res->result = false;
            }
        } else {
            last_msg_ = "Playback cez Motion Manager!";
            res->result = false;
        }
        render_ui();
    }

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr sub_;
    rclcpp::Service<ondrejka_interface::srv::MyService>::SharedPtr srv_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    int point_counter_;
    std::string last_msg_;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointLogger>());
    rclcpp::shutdown();
    return 0;
}