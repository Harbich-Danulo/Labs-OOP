#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike();
    int Move() override;
};
