#include <iostream>
#include "ElectricCar.h"

ElectricCar::ElectricCar(float cap) {
    SetEngine("�����������");
    SetBattery(cap);
    SetMaxSpeed(160);
    ShowVehicle();
    std::cout << "����������: " << batteryCapacity << " ���*���\n";
    Move();
}

int ElectricCar::SetBattery(float capacity) {
    batteryCapacity = capacity;
    return 1;
}

int ElectricCar::Move() {
    std::cout << "���������� ��� ���� � ���������.\n";
    return 1;
}
