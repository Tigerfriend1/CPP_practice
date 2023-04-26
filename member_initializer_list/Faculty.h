//
// Created by 김태경 on 2023/04/26.
//

#ifndef MEMBER_INITIALIZER_LIST_FACULTY_H
#define MEMBER_INITIALIZER_LIST_FACULTY_H

#include <string>

class Faculty{
private:
    std::string name;
    int numStd;
    Faculty* faculty;
public:
    Faculty(std::string name, int numStd):name(name), numStd(numStd), faculty(nullptr){};
    Faculty& get(){
        return *faculty;
    };
    std::string getName(){
        return name;
    }
    int getNumStd(){
        return numStd;
    }

};

#endif //MEMBER_INITIALIZER_LIST_FACULTY_H
