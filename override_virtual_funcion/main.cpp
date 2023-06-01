#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Vehicle {
public:
    virtual void accelerate() {
        std::cout << "The speed of the vehicle has increased." << std::endl;
    }
    static std::unique_ptr<Vehicle> make_vehicle();
};

class Gv70 : public Vehicle {
public:
    void accelerate() override {
        std::cout << "The speed of the gv70 has increased by 30 km/h." << std::endl;
    }
};

class Grandeur : public Vehicle {
public:
    void accelerate() override {
        std::cout << "The speed of the grandeur has increased by 20 km/h." << std::endl;
    }
};

class Carnibal : public Vehicle {
public:
    void accelerate() override {
        std::cout << "The speed of the carnibal has increased by 10 km/h." << std::endl;
    }
};

std::unique_ptr<Vehicle> Vehicle::make_vehicle() {
    string name;
    cin >> name;
    if (name == "gv70") {
        return std::make_unique<Gv70>();
    } else if (name == "grandeur") {
        return std::make_unique<Grandeur>();
    } else if (name == "carnibal") {
        return std::make_unique<Carnibal>();
    } else {
        return nullptr;
    }
}



int main() {

    std::vector<unique_ptr<Vehicle>> test_vehicles;

    test_vehicles.push_back(Vehicle::make_vehicle()); //gv70

    test_vehicles.push_back(Vehicle::make_vehicle()); //grandeur

    test_vehicles.push_back(Vehicle::make_vehicle()); //carnibal

    for (auto& v : test_vehicles)

        (*v).accelerate();

}
