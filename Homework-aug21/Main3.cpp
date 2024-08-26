#include "Car2.h"
#include <iostream>

int main() {
    Vehicle myVehicle(1700, 220);
    
    Car myCar(1500, 200, "Gasoline");

    myVehicle.describe();

    myCar.describe();

    Vehicle* vehiclePtr = &myCar;
    vehiclePtr->describe();

    return 0;
}
