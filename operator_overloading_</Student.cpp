//
// Created by 김태경 on 2023/05/02.
//
#include "Student.h"

bool Student::operator<(const Student &other) const {
    return this->name < other.name;

}

bool compareByGrade(const Student &a, const Student &b) {
    return a.grade>b.grade;
}

std::ostream& operator<<(std::ostream& os, const Student &a) {
    os <<"Id: "<< a.id<<" Name: "<<a.name<<" Grade: "<<a.grade;
    return os;
}

Student::Student() {

}


