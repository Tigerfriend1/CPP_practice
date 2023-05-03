//
// Created by 김태경 on 2023/05/03.
//

#ifndef OPERATOR_OVERLOADING____ARRAY_H
#define OPERATOR_OVERLOADING____ARRAY_H
#include <cstddef>
#include <initializer_list>
#include <memory>

class Array {
public:
    Array(std::initializer_list<int> args, size_t size);
    int& operator [] (int index);
    size_t size() const;

private:
    std::unique_ptr<int[]> data;
    size_t _size;
};
#endif //OPERATOR_OVERLOADING____ARRAY_H
