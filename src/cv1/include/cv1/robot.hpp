class Robot {
private:
    double x_pos = 0.0;
    double y_pos = 0.0;

public:
    // "Moves" robot by adding arguments to internal state
    void move(double x, double y);
    
    // Returns current coordinates without changing state
    double getX() const;
    double getY() const;
};
