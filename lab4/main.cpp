#include <iostream>
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
#include "SportsCar.h"
#include "ElectricCar.h"

using namespace std;

int main() {
    Vehicle* v1 = new Vehicle();
    Vehicle* v2 = new Bike();
    Vehicle* v3 = new Car();
    Vehicle* v4 = new SportsCar();
    Vehicle* v5 = new ElectricCar();

    cout << "\n--- Info ---\n";
    v1->printInfo();
    v2->printInfo();
    v3->printInfo();
    v4->printInfo();
    v5->printInfo();

    cout << "\n--- Deleting ---\n";
    delete v1;
    delete v2;
    delete v3;
    delete v4;
    delete v5;

        
}
