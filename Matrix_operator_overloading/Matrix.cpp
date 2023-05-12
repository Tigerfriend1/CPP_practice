//
// Created by 김태경 on 2023/05/03.
//
#include "Matrix.h"
#include <algorithm>




//matrix::matrix(const matrix &a, const matrix &b) {
//    this->data=new int[4];
//    data[0]=a.row;
//    data[1]=a.col;
//    data[2]=b.row;
//    data[3]=b.col;
//}

//matrix::matrix(std::initializer_list<std::initializer_list<int>> lst) {
//    row= lst.size();
//    col=(*lst.begin()).size();
//
//    data = new int[row * col];
//
//    int i = 0;
//    for (const auto &row_lst : lst) {
//        for (const int &value : row_lst) {
//            data[i] = value;
//            ++i;
//        }
//    }
//
//}
matrix::matrix(std::initializer_list<std::initializer_list<int>> lst) {
    row = lst.size();
    col = (*lst.begin()).size();

    data = new int[row * col];

    int* data_it = data;
    for (const auto &row_lst : lst) {
        if (std::size(row_lst)==0){
            data= nullptr;
            break;
        }
        data_it = std::copy(row_lst.begin(), row_lst.end(), data_it);
    }
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

std::ostream &operator<<(std::ostream &out, const matrix &a) {

    if (a.data== nullptr){
        out<<"||"<<std::endl;
    }
    else{
        out<<"|"<<a.data[0]<<" "<<a.data[1]<<"|"<<std::endl;
        out<<"|"<<a.data[2]<<" "<<a.data[3]<<"|"<<std::endl;
    }

    return out;
}





