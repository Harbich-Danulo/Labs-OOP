#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() {
    cout << "Car created.\n";
}

Car::~Car() {
    cout << "Car destroyed.\n";
}

void Car::printInfo()  {
    cout << "This is a car.\n";
}
