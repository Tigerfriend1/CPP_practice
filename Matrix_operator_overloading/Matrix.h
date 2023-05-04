//
// Created by 김태경 on 2023/05/03.
//

#ifndef MATRIX_OPERATOR_OVERLOADING_MATRIX_H
#define MATRIX_OPERATOR_OVERLOADING_MATRIX_H

#include <cstdlib>
#include <cstdio>
#include <iostream>

class matrix{
private:
    int* data = nullptr;
    int row = 0;
    int col = 0;
public:
    matrix() : row(0), col(0), data(nullptr){};
    matrix(int row, int col);
    //matrix(const matrix &a);
    matrix(const matrix& a, const matrix& b);
    matrix& inverse();
    matrix& operator+(const matrix& other)const;
    friend std::ostream& operator<<(std::ostream& out, const matrix& a){
        out<<"|"<<a.data[0]<<" "<<a.data[1]<<"|"<<std::endl;
        out<<"|"<<a.data[2]<<" "<<a.data[3]<<"|"<<std::endl;
        return out;
    }
};

std::ostream& operator<<(std::ostream& out, const matrix& a);

#endif //MATRIX_OPERATOR_OVERLOADING_MATRIX_H
