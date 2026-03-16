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
 * @brief Teleoperation node using linear interpolation to synchronize joint movements.
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
    switch (tolower(key)) {
      case '1': send_move({0.5, 0.5, 0.5}, "#1"); break;
      case '2': send_move({1.0, -0.5, 0.2}, "#2"); break;
      case '3': send_move({-1.2, 0.8, -0.8}, "#3"); break;
      case '4': send_move({2.0, 0.0, 1.5}, "#4"); break;
      case '5': send_move({0.0, 0.0, 0.0}, "HOME"); break;
      case 't': call_service(true); break;
      case 'l': call_service(false); break;
      case 'x': rclcpp::shutdown(); break;
    }
  }

private:
  void joint_callback(const sensor_msgs::msg::JointState::SharedPtr msg) {
    if (msg->position.size() >= 3) {
      joint_positions_ = msg->position;
    }
  }

  /**
   * @brief Synchronizes joint movements through linear interpolation.
   * Calculates required steps based on max displacement and desired velocity.
   */
  void send_move(const std::vector<double>& targets, const std::string& id) {
    double v_max = 0.8;         // Radians per second
    double loop_rate_hz = 50.0; // Frequency of publishing
    rclcpp::Rate loop_rate(loop_rate_hz);

    // Get current positions at the start of movement
    std::vector<double> start_pos = joint_positions_;
    
    // 1. Calculate the maximum distance any joint needs to travel
    double max_delta = 0.0;
    for (size_t i = 0; i < targets.size(); ++i) {
        max_delta = std::max(max_delta, std::abs(targets[i] - start_pos[i]));
    }

    if (max_delta < 0.001) {
        update_interface("Already at target " + id);
        return;
    }

    // 2. Determine total time and number of steps for synchronization
    double total_time = max_delta / v_max;
    int total_steps = static_cast<int>(total_time * loop_rate_hz);
    if (total_steps < 1) total_steps = 1;

    update_interface("Moving to " + id + " (Interpolating...)");

    // 3. Perform the movement in small, synchronized increments
    for (int step = 1; step <= total_steps; ++step) {
        double t = static_cast<double>(step) / total_steps;

        for (size_t i = 0; i < targets.size(); ++i) {
            rrm_msgs::msg::Command msg;
            msg.joint_id = static_cast<int>(i);
            // Linear interpolation: current = start + (target - start) * ratio
            msg.position = start_pos[i] + (targets[i] - start_pos[i]) * t;
            publisher_->publish(msg);
        }
        
        // Brief sleep to maintain the 50Hz rate
        loop_rate.sleep();
        
        // Spin to keep receiving joint updates if necessary (though we use start_pos)
        rclcpp::spin_some(this->get_node_base_interface());
    }

    update_interface("Reached target " + id);
  }

  void call_service(bool save_mode) {
    auto request = std::make_shared<ondrejka_interface::srv::MyService::Request>();
    request->velocity = 1.0; 
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