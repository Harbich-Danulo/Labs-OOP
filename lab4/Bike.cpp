#include <iostream>
#include "Bike.h"

Bike::Bike() {
    SetEngine("���������");
    SetWheels(2);
    SetMaxSpeed(30);
    ShowVehicle();
    Move();
}

int Bike::Move() {
    std::cout << "��������� ��������� ������!\n";
    return 1;
}
