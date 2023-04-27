//
// Created by 김태경 on 2023/04/26.
//
#include "String.h"

String::String() {
    s=new char[1];
    s[0]='\0';
}

String::String(const char *str) {
    if (str){
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }
    else{
        s=new char[1];
        s[0]='\0';
    }
}

const char *String::data() const {
    return s;
}

