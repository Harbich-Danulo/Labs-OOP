#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    ~Car() override;
    void printInfo() override;
};

#endif
