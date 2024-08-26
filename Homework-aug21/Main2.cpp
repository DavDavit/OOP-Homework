#include "Person.h"

int main() {
    Car myCar("Mercedes", "G-Wagon", 2020);

    Person person("Pablo Gavi", 20, myCar);

    person.describeCar();

    return 0;
}
