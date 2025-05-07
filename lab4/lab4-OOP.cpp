#include <iostream>
#include "Car.h"
#include "Bike.h"
#include "ElectricCar.h"
#include "SportsCar.h"
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);  
    setlocale(LC_ALL, "");   

    std::cout << "Створюємо звичайну машину:\n";
    Car myCar;

    std::cout << "\nСтворюємо велосипед:\n";
    Bike myBike;

    std::cout << "\nСтворюємо електрокар:\n";
    ElectricCar myEV(75);

    std::cout << "\nСтворюємо спорткар:\n";
    SportsCar mySport("Ferrari F8");

    return 0;
}
