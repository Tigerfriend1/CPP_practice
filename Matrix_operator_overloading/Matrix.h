//
// Created by 김태경 on 2023/05/03.
//

#ifndef MATRIX_OPERATOR_OVERLOADING_MATRIX_H
#define MATRIX_OPERATOR_OVERLOADING_MATRIX_H

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <initializer_list>

class matrix{
private:
    int* data = nullptr;
    int row = 0;
    int col = 0;
public:
    //matrix() : row(0), col(0), data(nullptr){};
    //matrix(int row, int col):data(new int[2]),row(row),col(col){};
    matrix(std::initializer_list<std::initializer_list<int>> lst);
    //matrix(const matrix &a);
    matrix(const matrix& a, const matrix& b);
    matrix& inverse();
    matrix& operator+(const matrix& other)const;
    friend std::ostream& operator<<(std::ostream& out, const matrix& a);
};

std::ostream& operator<<(std::ostream& out, const matrix& a);
//stringstream end
#endif //MATRIX_OPERATOR_OVERLOADING_MATRIX_H
