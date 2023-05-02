//
// Created by 김태경 on 2023/05/02.
//
#include "Complex.h"

std::ostream &operator<<(std::ostream &os, const Complex &c) {
    os<<c.r<<"+"<<c.i<<"i";
    return os;
}

Complex Complex::operator+(const Complex rhs) {
    Complex a(this->r+rhs.r, this->i+rhs.i);
    return a;
}

Complex Complex::operator-(const Complex rhs) {
    Complex a(this->r-rhs.r, this->i-rhs.i);
    return a;
}

