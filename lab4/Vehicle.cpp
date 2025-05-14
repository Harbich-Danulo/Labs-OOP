#include <iostream>
#include "Vehicle.h"

using namespace std;

int Vehicle::destructorCount = 0;   

Vehicle::Vehicle() {
    cout << "Vehicle created.\n";
}

Vehicle::~Vehicle() {
    cout << "Vehicle destroyed.\n";
    destructorCount++;
}

void Vehicle::printInfo()  {
    cout << "This is a vehicle.\n";
}
