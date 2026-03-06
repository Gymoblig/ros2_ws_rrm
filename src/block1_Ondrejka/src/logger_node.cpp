#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "rrm_msgs/msg/command.hpp"        
#include "ondrejka_interface/srv/my_service.hpp" 
#include <fstream>
#include <vector>


void save_position_to_file(int id, const std::vector<double>& positions, double velocity, rclcpp::Logger logger)
{
    std::ofstream file("trajectory.txt", std::ios::app);
    if (file.is_open()) {
        file << id << " ";
        for (double p : positions) file << p << " ";
        file << velocity << "\n";
        file.close();
        RCLCPP_INFO(logger, "Logged Point %d to trajectory.txt", id);
    } else {
        RCLCPP_ERROR(logger, "Failed to open trajectory.txt");
    }
}

class JointLogger : public rclcpp::Node
{
public:
    // Konštruktor
    JointLogger() : Node("joint_logger"), point_counter_(0)
    {
        // Prihlásenie sa na odber topicu /joint_states
        subscription_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, 
            std::bind(&JointLogger::joint_states_callback, this, std::placeholders::_1)
        );
        publisher_ = this->create_publisher<rrm_msgs::msg::Command>("move_command", 10);
        service_ = this->create_service<ondrejka_interface::srv::MyService>(
        "my_service",
        std::bind(&JointLogger::my_service_callback, this,
                std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "Logger node initialized and subscribed to /joint_states");
    }

    void my_service_callback(
        const std::shared_ptr<ondrejka_interface::srv::MyService::Request> request,
        std::shared_ptr<ondrejka_interface::srv::MyService::Response> response)
    {
        if (last_joint_states_.empty()) {
            response->result = false;
            response->message = "No joint state data yet.";
            return;
        }

        if (request->save) {
            save_position_to_file(point_counter_++, last_joint_states_, request->velocity, this->get_logger());
        }

        if (request->positions.empty()) {
            response->result = false;
            response->message = "No positions received!";
            return;
        }

        for (size_t i = 0; i < request->positions.size(); ++i) {
            auto move_msg = rrm_msgs::msg::Command();
            move_msg.joint_id = static_cast<int>(i);
            move_msg.position = request->positions[i];
            publisher_->publish(move_msg);
        }

        response->result = true;
        response->message = "Position saved!";
    }

private:
    // Callback function for processing incoming joint state messages
    void joint_states_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        last_joint_states_ = msg->position;
        // Console output of current joint positions
        printf("\r[LIVE] J0: %6.4f | J1: %6.4f | J2: %6.4f   ",
           msg->position[0], msg->position[1], msg->position[2]);
        yfflush(stdout);
    }

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr subscription_;
    rclcpp::Service<ondrejka_interface::srv::MyService>::SharedPtr service_;
    rclcpp::Publisher<rrm_msgs::msg::Command>::SharedPtr publisher_;
    int point_counter_;
    std::vector<double> last_joint_states_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointLogger>());
    rclcpp::shutdown();
    return 0;
}