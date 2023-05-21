//
// Created by 김태경 on 2023/05/18.
//

#ifndef TEMPLATE_COMPLEX_COMPLEX_H
#define TEMPLATE_COMPLEX_COMPLEX_H

#include <cmath>
#include <iostream>
#include <array>
#include <optional>

template <typename T, size_t N>
auto myFind(const std::array<T, N>& array, const T& value) {
    for (size_t i = 0; i < N; i++) {
        if (array[i] == value)
            return array + i;
    }
    return std::end(array); // 원소를 찾지 못한 경우 T 타입의 기본값을 반환합니다.
}

//template <typename T, size_t N>
//bool myFind(const T (&array)[N], const T& value) {
//    for (auto i = 0; i < N; i++) {
//        if (array[i] == value)
//            return true;
//    }
//    return false;
//}

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
};

#endif //TEMPLATE_COMPLEX_COMPLEX_H
