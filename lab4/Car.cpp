#include <iostream>
#include "Car.h"

Car::Car() {
    SetEngine("����������");
    SetWheels(4);
    SetMaxSpeed(180);
    ShowVehicle();
    Move();
}

int Car::Move() {
    std::cout << "��������� ��� �� �����.\n";
    return 1;
}
