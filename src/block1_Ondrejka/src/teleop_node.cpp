#include "rclcpp/rclcpp.hpp"
#include "rrm_msgs/msg/command.hpp"

#include <iostream>
#include <vector>

class Teleop : public rclcpp::Node
{
public:
  Teleop() : Node("Teleop")
  {
    RCLCPP_INFO(this->get_logger(), "Teleop initialized");
    
    // Bod 1: Publisher na topic move_command
    publisher_ = this->create_publisher<rrm_msgs::msg::Command>("move_command", 10);
    
    // Inicialization of joint positions
    joint_positions_ = {0.0, 0.0, 0.0}; 
  }

  void move(int joint_id, double position) {
    rrm_msgs::msg::Command message;
    message.joint_id = joint_id;
    message.position = position;
    publisher_->publish(message);
    RCLCPP_INFO(this->get_logger(), "Sent command: Joint %d -> Position %f", joint_id, position);
  }

  // Function to handle keyboard input and send commands accordingly (Bod 2)
  void handle_input(char key) {
    double step = 1; // How much to move the joint per key press
    
    switch (tolower(key)) {
      case 'q': joint_positions_[0] += step; move(0, joint_positions_[0]); break;
      case 'a': joint_positions_[0] -= step; move(0, joint_positions_[0]); break;
      case 'w': joint_positions_[1] += step; move(1, joint_positions_[1]); break;
      case 's': joint_positions_[1] -= step; move(1, joint_positions_[1]); break;
      case 'e': joint_positions_[2] += step; move(2, joint_positions_[2]); break;
      case 'd': joint_positions_[2] -= step; move(2, joint_positions_[2]); break;
      case 'r': joint_positions_ = {0.0, 0.0, 0.0}; move(0, 0); move(1, 0); move(2, 0); break;
      case 'x': rclcpp::shutdown(); break; // Exit on 'x'
      default: std::cout << "Not supported key pressed. Use: Q/A, W/S, E/D." << std::endl; break;
    }
  }

private:
  rclcpp::Publisher<rrm_msgs::msg::Command>::SharedPtr publisher_;
  std::vector<double> joint_positions_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Teleop>();
  
  std::cout << "Teleoperation: Q/A (Joint 0), W/S (Joint 1), E/D (Joint 2) | R - Reset to default 0 position | X to Exit | Confirm with Enter." << std::endl;

  char input;
  while (rclcpp::ok()) {
    std::cout << "Enter key: ";
    std::cin >> input; // Read user input from console

    node->handle_input(input);

    // Process callbacks to update joint states and print them to console
    rclcpp::spin_some(node); 
  }
  
  rclcpp::shutdown();
  return 0;
}