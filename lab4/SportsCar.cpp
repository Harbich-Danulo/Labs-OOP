#include <iostream>
#include "SportsCar.h"

SportsCar::SportsCar(std::string m) {
    SetEngine("Турбо-бензиновий");
    SetModel(m);
    SetMaxSpeed(300);
    ShowVehicle();
    std::cout << "Модель спорткару: " << model << std::endl;
    Move();
}

int SportsCar::SetModel(std::string m) {
    model = m;
    return 1;
}

int SportsCar::Move() {
    std::cout << "Спорткар мчить по трасі!\n";
    return 1;
}
