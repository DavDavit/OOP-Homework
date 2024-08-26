#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
    private:
    std::string make;
    std::string model;
    int year;

    public:
    Car();

    Car(const std::string& make, const std::string& model, const int year);
    void describe() const;
};

#endif