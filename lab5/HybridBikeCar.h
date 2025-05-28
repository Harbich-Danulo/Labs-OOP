#pragma once
#include "Car.h"
#include "Bike.h"

class HybridBikeCar : public Car, public Bike {
public:
    HybridBikeCar();
    ~HybridBikeCar() override;
    void printInfo()  override;
};
