#include <iostream>
#include "Vehicle.h"

int Vehicle::SetEngine(std::string type) {
    engineType = type;
    return 1;
}

int Vehicle::SetWheels(int w) {
    wheels = w;
    return 1;
}

int Vehicle::SetMaxSpeed(float speed) {
    maxSpeed = speed;
    return 1;
}

int Vehicle::ShowVehicle() {
    std::cout << "������: " << engineType << ", ������: " << wheels
        << ", ����. ��������: " << maxSpeed << " ��/���\n";
    return 1;
}

int Vehicle::Move() {
    std::cout << "��������� �������� � ������������ �������� " << maxSpeed << " ��/���.\n";
    return 1;
}
