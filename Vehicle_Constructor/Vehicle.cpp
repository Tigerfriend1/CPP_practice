//
// Created by 김태경 on 2023/04/26.
//


#include <iostream>
#include <iomanip>
#include "Vehicle.h"



void Vehicle::autoPilot(bool onOff){
    std::cout << "Auto-Pilot is " << (onOff ? "on!" : "off!") << std::endl;
}

void Vehicle::runFDS() const {
    if(hasFDS)
        std::cout << "Full Self-Driving!" << std::endl;
}

void Vehicle::displayEfficiency() const {
    std::cout << name << " Range: " << range << "km, Efficiency: " << std::setprecision(3) << range / batteryCapacity << "kWh/100km" << std::endl;
}

int main() {
    Vehicle modelY{"Model Y LR", 511, 85};
    auto model3 = Vehicle {"Model 3 LR",523, 85};

    modelY.displayEfficiency();
    model3.displayEfficiency();

    Vehicle vehicles[4] = {{"Model Y LR", 511, false, 85},
                           {"Model 3 LR", 523, true, 85},
                           {"Model Y LR", 511, false, 85},
                           {"Model 3 LR", 523, true, 85}};

    for (auto& v : vehicles) {
        v.autoPilot(false);
        v.runFDS();
        v.displayEfficiency();
    }

    Vehicle tesla[2];
    for (auto& t : tesla) {
        t.autoPilot(false);
        t.runFDS();
        t.displayEfficiency();
    }

    return 0;
}