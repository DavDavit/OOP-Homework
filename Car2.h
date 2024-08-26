#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

class Car : public Vehicle {
    private:
    std::string fuelType;

    public:
    Car();

    Car(double weight, double maxSpeed, const std::string& fuelType);
    void describe() const override;
};

#endif