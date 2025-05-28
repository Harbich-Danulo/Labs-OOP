#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
public:
    ElectricCar();
    ~ElectricCar() override;
     void printInfo() override;
};

#endif
