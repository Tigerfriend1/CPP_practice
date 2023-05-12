//
// Created by 김태경 on 2023/05/12.
//

#ifndef TEMPLATE_CLASS_MY_VECTOR_H
#define TEMPLATE_CLASS_MY_VECTOR_H

#include <algorithm>
#include <initializer_list>
#include <memory>

template<typename T>
class my_vector {
public:
    explicit my_vector(size_t N=0) noexcept ;  // 생성자를 구현하시오

    my_vector(std::initializer_list<int> lst) noexcept ;  // 생성자를 구현하시오

    my_vector(const my_vector<T>& other) noexcept ; // 복사 생성자를 구현하시오 (deep copy)

    T& operator[](int i) ; // subscript operator, 오퍼레이터 오버로딩 하시오

    size_t size() const // 멤버 함수를 구현하시오

private:
    size_t _size;
    std::unique_ptr<T[]> _data;
};

#endif //TEMPLATE_CLASS_MY_VECTOR_H
