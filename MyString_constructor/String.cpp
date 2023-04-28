//
// Created by 김태경 on 2023/04/28.
//
#include "String.h"

int String::count_=0;

String::String() {
    count_++;
    data_="\0";
    len_=0;
}

String::String(const char *s) {

}

String::~String() noexcept {
    count_--;
}

String::String(const String &s) noexcept {

}

const char *String::data() const {
    return nullptr;
}

bool String::empty() const {
    return false;
}

size_t String::size() const {
    return 0;
}

String &String::append(const String &str) {
    return ;
}

String &String::append(const char *str) {
    return ;
}

