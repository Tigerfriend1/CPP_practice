//
// Created by 김태경 on 2023/04/26.
//

#ifndef VEHICLE_CONSTRUCTOR_VEHICLE_H
#define VEHICLE_CONSTRUCTOR_VEHICLE_H

#include <string>
class Vehicle {
public:
    // your code here
    Vehicle(){
        this->name = "Model Y LR";
        this->range = 511;
        this->hasFDS = false;
        this -> batteryCapacity=85;
    };
    //Vehicle(std::string name, int range, float batteryCapacity) : name(name), range(range), batteryCapacity(batteryCapacity){};
    Vehicle(std::string name, int range, float batteryCapacity) {
        this->name=name;
        this->range=range;
        this->hasFDS = false;
        this->batteryCapacity=batteryCapacity;
    };


    Vehicle(std::string name, int range, bool hasFDS, float batteryCapacity) : name(name), range(range), hasFDS(hasFDS), batteryCapacity(batteryCapacity){};

    void autoPilot(bool onOff);
    void runFDS() const;
    void displayEfficiency() const;
private:
    std::string name;
    int range;
    bool hasFDS;
    float batteryCapacity;
};

#endif //VEHICLE_CONSTRUCTOR_VEHICLE_H
