#include <iostream>
#include "ElectricCar.h"

ElectricCar::ElectricCar(float cap) {
    SetEngine("Електричний");
    SetBattery(cap);
    SetMaxSpeed(160);
    ShowVehicle();
    std::cout << "Акумулятор: " << batteryCapacity << " кВт*год\n";
    Move();
}

int ElectricCar::SetBattery(float capacity) {
    batteryCapacity = capacity;
    return 1;
}

int ElectricCar::Move() {
    std::cout << "Електрокар їде тихо і екологічно.\n";
    return 1;
}
