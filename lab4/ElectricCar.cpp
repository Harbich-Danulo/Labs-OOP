#include <iostream>
#include "ElectricCar.h"

using namespace std;

ElectricCar::ElectricCar() {
    cout << "ElectricCar created.\n";
}

ElectricCar::~ElectricCar() {
    cout << "ElectricCar destroyed.\n";
}

void ElectricCar::printInfo()  {
    cout << "This is an electric car.\n";
}
