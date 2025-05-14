#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    Vehicle();
    virtual ~Vehicle();
    virtual void printInfo() ;

    static int destructorCount;  
};

#endif
