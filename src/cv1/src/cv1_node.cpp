#include <iostream> 
#include "cv1/robot.hpp"
#include "rclcpp/rclcpp.hpp" // If using ROS 2

int main(int argc, char ** argv) {
    rclcpp::init(argc, argv);
    Robot terminator;
    char input{'\0'};

    std::cout << "Use WASD to move the robot. Press 'q' to quit." << std::endl;

    while (std::cin >> input && input != 'q' && input != 'Q') {
        // Apply logic based on keyboard input
        if (input == 'w' || input == 'W') terminator.move(0, 1);
        else if (input == 's' || input == 'S') terminator.move(0, -1);
        else if (input == 'a' || input == 'A') terminator.move(-1, 0);
        else if (input == 'd' || input == 'D') terminator.move(1, 0);

        // Print current position to console
        std::cout << "Robot Position: X=" << terminator.getX() 
                  << ", Y=" << terminator.getY() << std::endl;
    }

    return 0;
}