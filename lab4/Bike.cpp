#include <iostream>
#include "Bike.h"

using namespace std;

Bike::Bike() {
    cout << "Bike created.\n";
}

Bike::~Bike() {
    cout << "Bike destroyed.\n";
}

void Bike::printInfo()  {
    cout << "This is a bike.\n";
}
