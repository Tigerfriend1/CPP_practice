//
// Created by 김태경 on 2023/05/02.
//

#ifndef OPERATOR_OVERLOADING____COMPLEX_H
#define OPERATOR_OVERLOADING____COMPLEX_H
#include <ostream>
class Complex {
public:
    Complex(double real=0, double imaginary=0) : r(real), i(imaginary) {};
    Complex operator + (const Complex rhs);
    Complex operator - (const Complex rhs);
    friend std::ostream& operator << (std::ostream& os, const Complex& c);
private:
    double r{0}, i{0};
};

std::ostream& operator << (std::ostream& os, const Complex& c);

#endif //OPERATOR_OVERLOADING____COMPLEX_H
