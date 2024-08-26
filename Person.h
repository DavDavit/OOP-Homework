#ifndef PERSON_H
#define PERSON_H

#include "Car.h"
#include <string>

class Person {
    private:
    std::string name;
    int age;
    Car ownedCar;

    public:
    Person();

    Person(const std::string& name, int age, const Car& car);
    void describeCar() const;
};

#endif