#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
public:
    SportsCar();
    ~SportsCar() override;
    void printInfo() override;
};

#endif
