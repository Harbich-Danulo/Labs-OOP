#pragma once
#include "Car.h"

class SportsCar : public Car {
    std::string model;

public:
    SportsCar(std::string m);
    int SetModel(std::string m);
    int Move() override;
};
