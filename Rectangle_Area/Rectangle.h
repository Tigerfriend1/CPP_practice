//
// Created by 김태경 on 2023/04/04.
//

#ifndef RECTANGLE_AREA_RECTANGLE_H
#define RECTANGLE_AREA_RECTANGLE_H
#include "Point.h"
class Rectangle {
public:
    //implements the constructor
    Rectangle(double x1, double y1, double x2, double y2): leftTop(x1,y1), rightBottom(x2,y2){}
    double area() {
        double width = abs(rightBottom.getX() - leftTop.getX());
        double height = abs(rightBottom.getY() - leftTop.getY());
        return width * height;
    };
private:
    Point leftTop, rightBottom;
};
#endif //RECTANGLE_AREA_RECTANGLE_H
