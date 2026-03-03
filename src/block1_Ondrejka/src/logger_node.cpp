#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

class JointLogger : public rclcpp::Node
{
public:
    // Konštruktor
    JointLogger() : Node("joint_logger")
    {
        // Prihlásenie sa na odber topicu /joint_states
        subscription_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, 
            std::bind(&JointLogger::joint_states_callback, this, std::placeholders::_1)
        );
        RCLCPP_INFO(this->get_logger(), "Logger node initialized and subscribed to /joint_states");
    }

private:
    // Callback function for processing incoming joint state messages
    void joint_states_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        // Console output of current joint positions
        for (size_t i = 0; i < msg->name.size(); ++i) {
            RCLCPP_INFO(this->get_logger(), "Joint: %zu | Current position: %.4f", 
                        i, msg->position[i]);
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointLogger>());
    rclcpp::shutdown();
    return 0;
}