//
// Created by 김태경 on 2023/04/26.
//

#ifndef VEHICLE_CONSTRUCTOR_VEHICLE_H
#define VEHICLE_CONSTRUCTOR_VEHICLE_H

#include <string>
class Vehicle {
public:
    // your code here

    Vehicle(): name("Model Y LR"), range(511), hasFDS(false), batteryCapacity(85){};
    Vehicle(std::string name, int range,bool hasFDS, float batteryCapacity) : name(name), range(range), hasFDS(hasFDS), batteryCapacity(batteryCapacity){};
    Vehicle(std::string name, int range, float batteryCapacity) : name(name), range(range), batteryCapacity(batteryCapacity){hasFDS= false;};

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
