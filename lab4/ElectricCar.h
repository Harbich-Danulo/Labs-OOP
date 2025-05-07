#pragma once
#include "Car.h"

class ElectricCar : public Car {
    float batteryCapacity;

public:
    ElectricCar(float cap);
    int SetBattery(float capacity);
    int Move() override;
};
