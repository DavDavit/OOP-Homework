#include "Person.h"

Person::Person() : name("Unknown"), age(0), ownedCar(Car()) {}

Person::Person(const std::string& name, int age, const Car& car)
    : name(name), age(age), ownedCar(car) {}

void Person::describeCar() const {
    std::cout << "Owner of the car: " << name << std::endl;
    std::cout << "Age of the car's owner: " << age << std::endl;
    std::cout << "Details of the owned car(below): " << std::endl;
    ownedCar.describe();
}