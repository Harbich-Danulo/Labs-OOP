#include <iostream>
#include "SportsCar.h"

using namespace std;

SportsCar::SportsCar() {
    cout << "SportsCar created.\n";
}

SportsCar::~SportsCar() {
    cout << "SportsCar destroyed.\n";
}

void SportsCar::printInfo()  {
    cout << "This is a sports car.\n";
}
