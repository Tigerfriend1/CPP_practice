//
// Created by 김태경 on 2023/05/02.
//

#ifndef OPERTOR_OVERLOADING___STUDENT_H
#define OPERTOR_OVERLOADING___STUDENT_H
#include <string>
#include <map>
#include <iostream>
#include <vector>

class Student {
private:
    int id;
    std::string name;
    int grade;
public:
    Student();
    Student(int id, std::string name, int grade) : id(id), name(name), grade(grade) {}
    bool operator<(const Student& other) const;
    friend bool compareByGrade(const Student& a, const Student& b);
    friend std::ostream& operator<< (std::ostream& os, const Student& a);
};

bool compareByGrade(const Student& a, const Student& b);
std::ostream& operator<< (std::ostream& os, const Student& a);
#endif //OPERTOR_OVERLOADING___STUDENT_H
