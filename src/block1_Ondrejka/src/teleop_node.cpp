#include "rclcpp/rclcpp.hpp"
#include "rrm_msgs/msg/command.hpp"
#include <iostream>
#include <vector>
#include <chrono>


//BONUS Excercise 4
#include <fstream>

// Adding libraries for Exercise 4 
#include "ondrejka_interface/srv/my_service.hpp"

class Teleop : public rclcpp::Node
{
public:
  Teleop() : Node("Teleop")
  {
    RCLCPP_INFO(this->get_logger(), "Teleop initialized");
    
    // Topic Publisher
    publisher_ = this->create_publisher<rrm_msgs::msg::Command>("move_command", 10);
    
    // Service Client
    client_ = this->create_client<ondrejka_interface::srv::MyService>("my_service");

    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
        return;
      }
      RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
    }

    // Starting joint positions
    joint_positions_ = {0.0, 0.0, 0.0}; 
  }

  // Topic-based move (Individual joints)
  void move(int joint_id, double position) {
    rrm_msgs::msg::Command message;
    message.joint_id = joint_id;
    message.position = position;
    publisher_->publish(message);
    
    // Update local storage so the next Service call knows where we are
    joint_positions_[joint_id] = position;
    RCLCPP_INFO(this->get_logger(), "Sent topic command: Joint %d -> Position %f", joint_id, position);
  }

  // Exercise 3 Point 1b: Synchronized Service-based move
  bool move(const std::vector<double>& target_positions, double max_velocity, bool save = false) {
    auto request = std::make_shared<ondrejka_interface::srv::MyService::Request>();
    pocitanicko_rychlosti(target_positions, max_velocity); // vypočíta ale výsledok nepotrebujeme posielať
    request->positions = target_positions;
    request->velocity = max_velocity;
    request->save = save;


    auto result = client_->async_send_request(request);

    // Wait for the service response (blocking)
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result, std::chrono::seconds(5)) !=
        rclcpp::FutureReturnCode::SUCCESS) 
    {
      RCLCPP_ERROR(this->get_logger(), "Service call failed :("); 
      return false;
    }

    auto response = result.get();
    
    // 3. Update internal positions only if the move was successful
    joint_positions_ = target_positions;
    
    //RCLCPP_INFO(this->get_logger(), "Service call succeeded: %s", response->message.c_str());
    return true;
  }

  void handle_input(char key) {
    double step = 1.0;
    
    switch (tolower(key)) {
      case 'q': move(0, joint_positions_[0] + step); break;
      case 'a': move(0, joint_positions_[0] - step); break;
      case 'w': move(1, joint_positions_[1] + step); break;
      case 's': move(1, joint_positions_[1] - step); break;
      case 'e': move(2, joint_positions_[2] + step); break;
      case 'd': move(2, joint_positions_[2] - step); break;
      case 'p': move({1.0, 1.0, 1.0}, 0.5); break;
      case 'o': move({3.0, 0.5, 2.0}, 2.5); break; 
      case 'r': move({0.0, 0.0, 0.0}, 1.0); break; // Reset using with service
      case 't': move(joint_positions_, 1.0, true); break;
      case 'x': rclcpp::shutdown(); break;
      case 'l': play_positions_from_file(); break;
      default: std::cout << "Supported: Q/A, W/S, E/D, P (Service), R (Reset), X (Exit)" << std::endl; break;
    }
  }

  void play_positions_from_file()
  {
      std::ifstream file("trajectory.txt");
      if (!file.is_open()) {
          RCLCPP_ERROR(this->get_logger(), "Cannot open trajectory.txt!");
          return;
      }

      int id;
      double p0, p1, p2, vel;
      while (file >> id >> p0 >> p1 >> p2 >> vel) {
          RCLCPP_INFO(this->get_logger(), "Playing point %d...", id);
          move({p0, p1, p2}, vel);
          rclcpp::sleep_for(std::chrono::milliseconds(500));
      }
      file.close();
  }

private:

  std::vector<double> pocitanicko_rychlosti(const std::vector<double>& targets, double v_max) {
    size_t n = targets.size();
    std::vector<double> velocities(n, 0.0);
    double max_delta = 0.0;

    // 1. Find max distance
    for (size_t i = 0; i < n; ++i) {
        double delta = std::abs(targets[i] - joint_positions_[i]);
        if (delta > max_delta) max_delta = delta;
    }

    // Scale all relative to the slowest
    if (max_delta > 0.0) {
        for (size_t i = 0; i < n; ++i) {
            double delta = std::abs(targets[i] - joint_positions_[i]);
            velocities[i] = v_max * (delta / max_delta);
        }
    }
    else {
      RCLCPP_INFO(this->get_logger(), "Move was saved!"); 
    }
    return velocities;
  }
  rclcpp::Publisher<rrm_msgs::msg::Command>::SharedPtr publisher_;
  rclcpp::Client<ondrejka_interface::srv::MyService>::SharedPtr client_;
  std::vector<double> joint_positions_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Teleop>();
  std::cout << "Teleoperation ready. Use keys to move, Enter to confirm." << std::endl;

  char input;
  while (rclcpp::ok()) {
    std::cout << "Enter key: ";
    if (!(std::cin >> input)) break;
    node->handle_input(input);
    rclcpp::spin_some(node); 
  }
  
  rclcpp::shutdown();
  return 0;
}