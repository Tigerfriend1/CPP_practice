//
// Created by 김태경 on 2023/04/03.
//

#ifndef INHERITANCE_TEMPERATURE_H
#define INHERITANCE_TEMPERATURE_H
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;


enum SCALE{
    CELSIUS,
    FAHRENHEIT
};

class Temperature{
private:
    double temperature;
    SCALE scale;
private:
    void convertToCelsius();
    void convertToFahrenheit();
public:
     Temperature(double temp, SCALE scale=CELSIUS);
     Temperature add(Temperature other);
     string print() const;

};

#endif //INHERITANCE_TEMPERATURE_H
