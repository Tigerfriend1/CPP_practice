//
// Created by 김태경 on 2023/06/05.
//

#ifndef ISHAPE_HIERARCHY1_HELPER_H
#define ISHAPE_HIERARCHY1_HELPER_H
#include "IShape.h"
#include <cmath>

double calcDist(const Point& p1, const Point& p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return std::sqrt(dx*dx + dy*dy);
}
#endif //ISHAPE_HIERARCHY1_HELPER_H
