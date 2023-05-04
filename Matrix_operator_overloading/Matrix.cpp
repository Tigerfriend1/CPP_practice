//
// Created by 김태경 on 2023/05/03.
//
#include "Matrix.h"



matrix::matrix(int row, int col) {
    this->row=row;
    this->col=col;
    this->data = new int[2];
}
matrix::matrix(const matrix &a, const matrix &b) {
//    this->row=a.row+b.row;
//    this->col=a.col+b.col;
    this->data=new int[4];
    data[0]=a.row;
    data[1]=a.col;
    data[2]=b.row;
    data[3]=b.col;
}


//matrix &matrix::inverse() {
//    return ;
//}

matrix &matrix::operator+(const matrix &other) const {
    matrix a={{data[0]+other.data[0],data[1]+other.data[1]},{data[2]+other.data[2],data[3]+other.data[3]}};
    return a;
}



