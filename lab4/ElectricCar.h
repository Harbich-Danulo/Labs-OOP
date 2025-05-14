#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
public:
    ElectricCar();
    ~ElectricCar();
    void printInfo()  override;
};

#endif
