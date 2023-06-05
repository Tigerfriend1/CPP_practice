//
// Created by 김태경 on 2023/05/18.
//

#ifndef TEMPLATE_COMPLEX_COMPLEX_H
#define TEMPLATE_COMPLEX_COMPLEX_H

#include <cmath>
#include <iostream>
#include <array>
#include <optional>

template <typename T, std::size_t N>
typename std::array<T, N>::const_iterator myFind(const std::array<T, N>& arr, const T& value) {
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it == value) {
            return it;
        }
    }
    return arr.end();
}

class Complex {
private:
    float r, i ;
public:
    Complex(float _r = 0.F, float _i = 0.F) : r(_r), i(_i) {}

    bool operator < (const Complex& c) const {
        return size() < c.size() ;
    }
    float size() const { return sqrt(r*r + i*i) ; }
    bool operator == (const Complex& c) const {
        return ( r == c.r && i == c.i ) ; }

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) ;

};
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << "(" << c.r << ", " << c.i << ")";
    return os;
}

#endif //TEMPLATE_COMPLEX_COMPLEX_H
