//
// Created by 김태경 on 2023/04/26.
//

#ifndef MEMBER_INITIALIZER_LIST_UNIVERSITY_H
#define MEMBER_INITIALIZER_LIST_UNIVERSITY_H

#include <string>
#include <vector>
#include "Department.h"
class University{
private:
    std::string name;
    int numUni;
    std::vector<Department*> dept;
public:
    University(std::string name, int numUni): name(name), numUni(numUni){};
    void setDepartments(Department depts[]){
        for (int i=0 ; i<numUni; i++){
            dept.push_back(&depts[i]);
        }
    };
    void printInfo(){
        std::cout<<"University Name: "<<name<<std::endl;
        std::cout<<"Number of Departments: "<<numUni<<std::endl<<std::endl;
        for (auto u : dept){
            std::cout<<"Department Name: "<<u->getName()<<std::endl;
            if (u->isFaculty()){
                std::cout<<"Faculty name: "<<u->getFacultyName()<<std::endl;
                std::cout<<"Number of Faculty Members: "<<u->getFacultyNum()<<std::endl<<std::endl;
            }
            else{
                std::cout<<"Faculty name: N/A"<<std::endl;
                std::cout<<"Number of Faculty Members: N/A"<<std::endl<<std::endl;
            }
        }
    }
};

#endif //MEMBER_INITIALIZER_LIST_UNIVERSITY_H
