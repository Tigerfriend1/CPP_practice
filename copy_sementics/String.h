//
// Created by 김태경 on 2023/04/26.
//
//조건 : operator overloading은 우선 사용하지 않고 진행해본다. 연산자 오버로딩은 이후 다른 예제로 다룰예정

#ifndef COPY_SEMENTICS_STRING_H
#define COPY_SEMENTICS_STRING_H
#include <string>
class String{
private:
    char* s;
public:
    String();
    String(const char* str);
    const char* data() const;
    
};

#endif //COPY_SEMENTICS_STRING_H
