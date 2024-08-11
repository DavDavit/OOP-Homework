#include <iostream>
#include <string>

class Car {
    private:
    std::string make;
    std::string model;
    int year;
    double mileage;

    public:
    //Below is the default constructor!!
    Car() : make(""), model(""), year(0), mileage(0.0) {}

    //This one below is the parametrized constructor!
    Car(const std::string& make, const std::string& model, int year, double mileage) 
        : make(make), model(model), year(year), mileage(mileage) {}

    //And finally the copy constructor below!!!
    Car(const Car& other)
        : make(other.make), model(other.model), year(other.year), mileage(other.mileage) {}

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }
    double getMileage() const { return mileage; }

    void setMake(const std::string& make) { this->make = make; }
    void setModel(const std::string& model) { this->model = model; }
    void setYear(int year) { this->year = year; }
    void setMileage(double mileage) { this->mileage = mileage; }

    void displayInfo() const {
        std::cout << "Car Information:" << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }

    void drive(double distance) {
        mileage += distance;
        std::cout << "You have driven " << distance << " miles! New mileage is " << mileage << " miles." << std::endl;
    }

    void service() {
        mileage = 0.0;
        std::cout << "The car has been serviced!! Mileage is reset to " << mileage << " miles." << std::endl;
    }
};

int main() {
    Car car1;
    car1.displayInfo();
    std::cout << std::endl;
    
    car1.setMake("BMW");
    car1.setModel("X6");
    car1.setYear(2009);
    car1.setMileage(90000);
    car1.displayInfo();
    std::cout << std::endl;

    Car car2("Mercedes-Benz", "GLE", 2019, 45000);
    car2.displayInfo();
    std::cout << std::endl;

    Car car3 = car2;
    car3.displayInfo();
    std::cout << std::endl;

    car3.drive(550);
    car3.displayInfo();
    std::cout << std::endl;

    car3.service();
    car3.displayInfo();

    return 0;
}
