#include <iostream>
#include "SportsCar.h"

SportsCar::SportsCar(std::string m) {
    SetEngine("�����-����������");
    SetModel(m);
    SetMaxSpeed(300);
    ShowVehicle();
    std::cout << "������ ���������: " << model << std::endl;
    Move();
}

int SportsCar::SetModel(std::string m) {
    model = m;
    return 1;
}

int SportsCar::Move() {
    std::cout << "�������� ����� �� ����!\n";
    return 1;
}
