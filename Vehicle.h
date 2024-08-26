#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
    protected:
    double weight;
    double maxSpeed;

    public:
    Vehicle();
    Vehicle(double weight, double maxSpeed);
    virtual void describe() const;
};

#endif