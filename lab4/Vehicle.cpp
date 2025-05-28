#include <iostream>
#include "Vehicle.h"

using namespace std;


Vehicle::Vehicle() {
    cout << "Vehicle  created.\n";
}

Vehicle::~Vehicle() {
    cout << "Vehicle destroyed.\n";
}

void Vehicle::printInfo()  {
    cout << "This is a vehicle.\n";
}
