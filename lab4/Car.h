#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    ~Car();
    void printInfo()  override;
};

#endif
