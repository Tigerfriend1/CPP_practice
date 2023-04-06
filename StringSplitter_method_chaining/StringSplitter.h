//
// Created by 김태경 on 2023/04/05.
//

#ifndef STRINGSPLITTER_METHOD_CHAINING_STRINGSPLITTER_H
#define STRINGSPLITTER_METHOD_CHAINING_STRINGSPLITTER_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class StringSplitter{
private:
    string myString;
public:
    StringSplitter(string mystring):myString(mystring){}

    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    vector<string> split(char i);
};


#endif //STRINGSPLITTER_METHOD_CHAINING_STRINGSPLITTER_H
