//
// Created by 김태경 on 2023/04/28.
//

#ifndef MYSTRING_CONSTRUCTOR_STRING_H
#define MYSTRING_CONSTRUCTOR_STRING_H
#include <iostream>
#include <algorithm>

class String {
public:
    String() ;
    explicit String(const char* s) ;
    ~String() noexcept ;
    String(const String& s) noexcept ;

public:
    const char* data() const;
    bool empty() const;
    size_t size() const;
    String& append(const String& str);
    String& append(const char* str);


private:
    static int count_;
    char* data_;
    size_t len_;
};
#endif //MYSTRING_CONSTRUCTOR_STRING_H
