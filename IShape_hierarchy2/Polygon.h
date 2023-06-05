//
// Created by 김태경 on 2023/06/05.
//

#ifndef ISHAPE_HIERARCHY2_POLYGON_H
#define ISHAPE_HIERARCHY2_POLYGON_H
#include "IShape.h"
#include "Helper.h"
#include <sstream>
#include <iomanip>

class Polygon: public IShape{
public:
    Polygon(vector<Point> point){
        for (const auto& v : point){
            points.emplace_back(v);
        }
    }
    virtual ~Polygon() noexcept {
        std::cout << "Polygon destructor called" << std::endl;
    };
    virtual double getArea() const override {
        return calcDist(points[1],points[2])*calcDist(points[0],points[1])- 1;

    }
    virtual double getPerimeter() const override{
        return (calcDist(points[0],points[1])*2 + calcDist(points[1],points[2])+calcDist(points[3],points[4])*2);
    }
    virtual std::string toString() const override{
        std::ostringstream os;
        os << std::fixed << std::setprecision(2);
        os<<"Polygon Area: "<<getArea()<<", Perimeter: "<<getPerimeter();
        return os.str();
    }
};
#endif //ISHAPE_HIERARCHY2_POLYGON_H
