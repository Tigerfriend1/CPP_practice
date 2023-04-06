//
// Created by 김태경 on 2023/04/05.
//

#include "StringSplitter.h"
#include <string>
using namespace std;

StringSplitter& StringSplitter::trim() {
    this->myString.erase(0,this->myString.find_first_not_of(" "));
    this->myString.erase(this->myString.find_last_not_of(" ")+1);
    return *this;
}

StringSplitter& StringSplitter::removeNonAlnum() {
    for (int i =0; i< size(this->myString); i++) {
        if (myString[i]==' '){
            continue;
        }
        if (isalnum(this->myString[i])==0){
            this->myString.erase(i,1);
            i--;
        }
    }

    return *this;
}

vector<string> StringSplitter::split(char i) {
    vector<string>vec;
    string a="";
    for (auto& c : myString){
        if (c==i){
            vec.push_back(a);
            a="";
        }
        else {
            a+=c;
        }
    }
    if(!a.empty()){
        vec.push_back(a);
    }
    return vec;
}
