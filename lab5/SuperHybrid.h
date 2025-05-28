#pragma once
#include "HybridBikeCar.h"
#include "Engine.h"
#include "Battery.h"

class SuperHybrid : public HybridBikeCar, public Engine, public Battery
{
public:
    SuperHybrid();
    ~SuperHybrid() override;
    void printInfo() override;
};