#include <iostream>
#include "Bike.h"

Bike::Bike() {
    SetEngine("Педальний");
    SetWheels(2);
    SetMaxSpeed(30);
    ShowVehicle();
    Move();
}

int Bike::Move() {
    std::cout << "Велосипед крутиться ногами!\n";
    return 1;
}
