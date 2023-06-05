//
// Created by 김태경 on 2023/06/05.
//

#ifndef ISHAPE_HIERARCHY1_RECTANGLE_H
#define ISHAPE_HIERARCHY1_RECTANGLE_H
#include "IShape.h"
#include "Helper.h"
#include <sstream>

class Rectangle: public IShape{
public:
    Rectangle(vector<Point> point){
        for (const auto& v : point){
            points.emplace_back(v);
        }
    }
    virtual ~Rectangle() noexcept {
        std::cout << "Rectangle destructor called" << std::endl;
    };
    virtual double getArea() const override {
        return calcDist(points[1],points[2])*calcDist(points[0],points[1]);

    }
    virtual double getPerimeter() const override{
        return (calcDist(points[1],points[2])+ calcDist(points[0],points[1]))*2;
    }
    virtual std::string toString() const override{
        std::ostringstream os;
        os << std::fixed << std::setprecision(2);
        os<<"Rectangle Area: "<<getArea()<<", Perimeter: "<<getPerimeter();
        return os.str();
    }
};

#endif //ISHAPE_HIERARCHY1_RECTANGLE_H
