#include <iostream>
#include "HybridBikeCar.h"

HybridBikeCar::HybridBikeCar()
{
    std::cout << "HybridBikeCar constructor\n";
}

HybridBikeCar::~HybridBikeCar()
{
    std::cout << "HybridBikeCar destructor\n";
}
void HybridBikeCar::printInfo()
{
    std::cout << "Hybrid of Car and Bike\n";
}
