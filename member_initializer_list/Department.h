//
// Created by 김태경 on 2023/04/26.
//

#ifndef MEMBER_INITIALIZER_LIST_DEPARTMENT_H
#define MEMBER_INITIALIZER_LIST_DEPARTMENT_H
#include <string>
#include "Faculty.h"
#include <iostream>
class Department{
private:
    std::string name;
    int numDepartments;
    Department* departments;
    Faculty* faculty;
public:
    Department():name(""), numDepartments(0){};
    Department(std::string name, Faculty* faculty): name(name), faculty(nullptr){};
    Department(std::string name): name(name), faculty{nullptr}{};
    void setFaculty(Faculty *faculty){
        this->faculty=faculty;
    };
    std::string getName(){
        return name;
    }
    std::string getFacultyName(){
        return faculty->getName();
    }
    int getFacultyNum(){
        return faculty->getNumStd();
    }
    bool isFaculty(){
        return faculty;
    }


};

#endif //MEMBER_INITIALIZER_LIST_DEPARTMENT_H
