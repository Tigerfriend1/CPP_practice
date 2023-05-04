//
// Created by 김태경 on 2023/05/03.
//
#include "Matrix.h"




matrix::matrix(const matrix &a, const matrix &b) {
    this->data=new int[4];
    data[0]=a.row;
    data[1]=a.col;
    data[2]=b.row;
    data[3]=b.col;
}


matrix &matrix::inverse() {
    if (data== nullptr){
        return *this;
    }
    int a=data[0];
    int b=data[1];
    int c=data[2];
    int d=data[3];
    int i=1/(a*d-b*c);
    matrix *A= new matrix{{i*d,-i*b},{-i*c,i*a}};
    return *A;
}

matrix &matrix::operator+(const matrix &other) const {
    matrix *a=new matrix{{data[0]+other.data[0],data[1]+other.data[1]},{data[2]+other.data[2],data[3]+other.data[3]}};
    return *a;
}

//matrix::matrix(const std::initializer_list<int> lst) {
//    if (lst.size() < 1) {
//        throw std::invalid_argument("Cannot create matrix with empty initializer list");
//    }
//}



