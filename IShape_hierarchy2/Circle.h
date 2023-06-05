//
// Created by 김태경 on 2023/06/05.
//

#ifndef ISHAPE_HIERARCHY1_CIRCLE_H
#define ISHAPE_HIERARCHY1_CIRCLE_H
#include "IShape.h"
#include <sstream>
#include "Helper.h"

class Circle: public IShape{
public:
    Circle(Point point, int r) {
        points.emplace_back(point);
        this->r=r;
    }
    virtual ~Circle() noexcept {
        std::cout << "Circle destructor called" << std::endl;
    };
    virtual double getArea() const override {
        return r*r*3.14159;
    }
    virtual double getPerimeter() const override{
        return 2*r*3.14159;
    }
    virtual std::string toString() const override{
        std::ostringstream os;
        os << std::fixed << std::setprecision(2);
        os<<"Circle Area: "<<getArea()<<", Perimeter: "<<getPerimeter();
        return os.str();
    }
private:
    int r;
};
#endif //ISHAPE_HIERARCHY1_CIRCLE_H
