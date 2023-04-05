//
// Created by 김태경 on 2023/04/04.
//

#ifndef RECTANGLE_AREA_POINT_H
#define RECTANGLE_AREA_POINT_H
#include <iostream>
#include <cmath>
class Point {
public:
    Point(double x=0, double y=0) : x(x), y(y) {}
    double norm() const {return sqrt(x*x + y*y);};
    double getX() const {return x;}
    double getY() const {return y;}
private:
    const double x, y;
};
#endif //RECTANGLE_AREA_POINT_H
