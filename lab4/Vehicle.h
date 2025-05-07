#pragma once
#include <string>

class Vehicle {
protected:
    std::string engineType;
    int wheels;
    float maxSpeed;

    int ShowVehicle();

public:
    int SetEngine(std::string type);
    int SetWheels(int w);
    int SetMaxSpeed(float speed);
    virtual int Move();
    virtual ~Vehicle() = default;
};
