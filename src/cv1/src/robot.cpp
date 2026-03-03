#include "cv1/robot.hpp"


// Moving the robot by adding the input values to the current position
void Robot::move(double x, double y) {
    x_pos += x;
    y_pos += y;
}

// Finding the current position of the robot on X axis
double Robot::getX() const {
    return x_pos;
}

// Finding the current position of the robot on Y axis
double Robot::getY() const {
    return y_pos;
}