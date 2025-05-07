#include <iostream>
#include "Car.h"

Car::Car() {
    SetEngine("Бензиновий");
    SetWheels(4);
    SetMaxSpeed(180);
    ShowVehicle();
    Move();
}

int Car::Move() {
    std::cout << "Автомобіль їде по дорозі.\n";
    return 1;
}
