//
// Created by 김태경 on 2023/06/05.
//

#ifndef ISHAPE_HIERARCHY1_ISHAPE_H
#define ISHAPE_HIERARCHY1_ISHAPE_H
#include <iostream>
#include <vector>

using namespace std;
class Point {
public:
    int x = 0;
    int y = 0;
    Point(int _x, int _y) : x(_x), y(_y) {};
};

class IShape {
public:
    IShape() = default;
    virtual ~IShape() noexcept {
        std::cout << "IShape destructor called" << std::endl;
    };
    IShape(const std::vector<Point>& points) : points(points) {};;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;

    friend std::ostream& operator<<(std::ostream& str, const IShape& shape);

protected:
    virtual std::string toString() const = 0;
    std::vector<Point> points;
};

std::ostream& operator << (std::ostream& os, const IShape& shape) {
    return os << shape.toString();
}

#endif //ISHAPE_HIERARCHY1_ISHAPE_H
