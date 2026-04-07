#include "rclcpp/rclcpp.hpp"
#include "rrm_msgs/msg/command.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "ondrejka_interface/srv/my_service.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>

/**
 * Teleoperation node using linear interpolation for joint control.
 */
class Teleop : public rclcpp::Node
{
public:
  Teleop() : Node("teleop_node"), joint_positions_({0.0, 0.0, 0.0}), last_status_("Initializing...")
  {
    publisher_ = this->create_publisher<rrm_msgs::msg::Command>("move_command", 10);
    client_ = this->create_client<ondrejka_interface::srv::MyService>("my_service");

    joint_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "/joint_states", 10, std::bind(&Teleop::joint_callback, this, std::placeholders::_1));

    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      if (!rclcpp::ok()) return;
      update_interface("Connecting to Service Server...");
    }
    update_interface("System ready.");
  }

  void update_interface(const std::string& status) {
    last_status_ = status;
    std::cout << "\033[H\033[J";
    std::cout << "┌──────────────────────────────────────────────────┐" << std::endl;
    std::cout << "│      ROBOT TEACH-IN & TRAJECTORY SYSTEM          │" << std::endl;
    std::cout << "├───────────┬──────────────────┬───────────────────┤" << std::endl;
    std::cout << "│  Command  │   Description    │      Action       │" << std::endl;
    std::cout << "├───────────┼──────────────────┼───────────────────┤" << std::endl;
    std::cout << "│    [1]    │ Position Set #1  │ (0.5, 0.5, 0.5)   │" << std::endl;
    std::cout << "│    [2]    │ Position Set #2  │ (1.0,-0.5, 0.2)   │" << std::endl;
    std::cout << "│    [3]    │ Position Set #3  │ (-1.2, 0.8,-0.8)  │" << std::endl;
    std::cout << "│    [4]    │ Position Set #4  │ (2.0, 0.0, 1.5)   │" << std::endl;
    std::cout << "│    [5]    │ Home Position    │ (0.0, 0.0, 0.0)   │" << std::endl;
    std::cout << "├───────────┴──────────────────┴───────────────────┤" << std::endl;
    std::cout << "│ [T] Save Current | [L] Playback | [X] Exit       │" << std::endl;
    std::cout << "└──────────────────────────────────────────────────┘" << std::endl;
    std::cout << " STATUS: " << last_status_ << std::endl;
    std::cout << " Enter key: ";
    std::flush(std::cout);
  }

  void handle_input(char key) {
    bool success = false;
    switch (tolower(key)) {
      case '1': success = move({0.5, 0.5, 0.5}, "#1", 0.8); break;
      case '2': success = move({1.0, -0.5, 0.2}, "#2", 0.8); break;
      case '3': success = move({-1.2, 0.8, -0.8}, "#3", 1.2); break;
      case '4': success = move({2.0, 0.0, 1.5,1.0,1.0,1.0}, "#4", 0.8); break;
      case '5': success = move({0.0, 0.0, 0.0}, "HOME", 0.4); break;
      case 't': call_service(true, 1.0); return;
      case 'l': call_service(false, 1.0); return;
      case 'x': rclcpp::shutdown(); return;
      default: return;
    }

    if (!success && rclcpp::ok()) {
        update_interface("Movement interrupted or failed.");
    }
  }

private:
  void joint_callback(const sensor_msgs::msg::JointState::SharedPtr msg) {
    if (msg->position.size() >= 3) {
      joint_positions_ = msg->position;
    }
  }

  /**
   * Performs linear interpolation to reach target positions.
   * Returns true if successful, false if ROS shutdown occurs.
   */
  bool move(const std::vector<double>& targets, const std::string& id, double v_max) {
    double loop_rate_hz = 100.0;
    rclcpp::Rate loop_rate(loop_rate_hz);

    // Save starting position
    std::vector<double> start_pos = joint_positions_;
    
    // Calculate maximum joint displacement
    double max_delta = 0.0;
    for (size_t i = 0; i < targets.size(); ++i) {
        max_delta = std::max(max_delta, std::abs(targets[i] - start_pos[i]));
    }

    // Check if robot is already at target
    if (max_delta < 0.001) {
        update_interface("Already at target " + id);
        return true;
    }

    // Calculate trajectory steps
    double total_time = max_delta / v_max;
    int total_steps = static_cast<int>(total_time * loop_rate_hz);
    if (total_steps < 1) total_steps = 1;

    update_interface("Moving to " + id + " at " + std::to_string(v_max) + " rad/s");

    for (int step = 1; step <= total_steps; ++step) {
        // Stop if ROS is shutting down
        if (!rclcpp::ok()) {
            return false;
        }

        double t = static_cast<double>(step) / total_steps;

        // Interpolate and publish command for each joint
        for (size_t i = 0; i < targets.size(); ++i) {
            rrm_msgs::msg::Command msg;
            msg.joint_id = static_cast<int>(i);
            msg.position = start_pos[i] + (targets[i] - start_pos[i]) * t;
            publisher_->publish(msg);
        }

        loop_rate.sleep();
        // Process callbacks to keep joint_positions_ updated
        rclcpp::spin_some(this->get_node_base_interface());
    }

    update_interface("Reached target " + id);
    return true;
  }

  void call_service(bool save_mode, double velocity) {
    auto request = std::make_shared<ondrejka_interface::srv::MyService::Request>();
    request->velocity = velocity; 
    request->save = save_mode;

    update_interface(save_mode ? "Sending Save Request..." : "Requesting Playback...");
    auto result = client_->async_send_request(request);
    
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result, std::chrono::seconds(5)) 
        == rclcpp::FutureReturnCode::SUCCESS) {
      update_interface("Server: " + result.get()->message);
    } else {
      update_interface("Error: Service Timeout.");
    }
  }

  rclcpp::Publisher<rrm_msgs::msg::Command>::SharedPtr publisher_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
  rclcpp::Client<ondrejka_interface::srv::MyService>::SharedPtr client_;
  std::vector<double> joint_positions_;
  std::string last_status_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Teleop>();
  
  char input;
  while (rclcpp::ok()) {
    if (!(std::cin >> input)) break;
    node->handle_input(input);
    rclcpp::spin_some(node); 
  }

  rclcpp::shutdown();
  return 0;
}