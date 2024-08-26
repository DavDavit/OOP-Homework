#include "Car2.h"
#include <iostream>

Car::Car() : Vehicle(0.0, 0.0), fuelType("Unknown") {}

Car::Car(double weight, double maxSpeed, const std::string& fuelType)
    : Vehicle(weight, maxSpeed), fuelType(fuelType) {}
    
void Car::describe() const {
    std::cout << "This is a vehicle which weights " << weight << "kg, whose maximum speed is " 
    << maxSpeed << "km/h and its fuel type is " << fuelType << "." << std::endl;
}
