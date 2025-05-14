#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
public:
    SportsCar();
    ~SportsCar();
    void printInfo()  override;
};

#endif
