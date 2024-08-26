#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : weight(0.0), maxSpeed(0.0) {}

Vehicle::Vehicle(double weight, double maxSpeed) 
    : weight(weight), maxSpeed(maxSpeed) {}

    void Vehicle::describe() const {
        std::cout << "This is a vehicle which weights " << weight << "kg and whose maximum speed is " 
        << maxSpeed << "km/h." << std::endl;
    }