#include "Car.h"

Car::Car() : make("Unknown"), model("Unknown"), year(0) {}

Car::Car(const std::string& make, const std::string& model, const int year)
    : make(make), model(model), year(year) {}

void Car::describe() const {
    std::cout << "Name of the car: " << make << std::endl;
    std::cout << "Model of the car: " << model << std::endl;
    std::cout << "Production year of the car: " << year << std::endl;
}