//
// Created by 김태경 on 2023/05/03.
//

#include "Array.h"
#include <algorithm>
Array::Array(std::initializer_list<int> args, size_t size) : data(new int[size]),_size(size) {
    std::copy(args.begin(),args.end(),data.get());
}

int &Array::operator[](int index) {
    return this->data[index];
}

size_t Array::size() const {
    return this->_size;
}
