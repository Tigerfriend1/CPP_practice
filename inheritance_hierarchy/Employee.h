//
// Created by 김태경 on 2023/05/24.
//

#ifndef INHERITANCE_HIERARCHY_EMPLOYEE_H
#define INHERITANCE_HIERARCHY_EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee(string name, int salary) : name_(name), salary_(salary) {}
    virtual void print_report() const {
        cout << "Name: " << name_ << endl;
        cout << "Salary: " << salary_ << endl;
        cout << "Years of service: " << years_of_service_ << endl;
        cout << "Performance score: " << performance_score_ << endl;
    }
    string get_name() const {
        return name_;
    }
protected:
    string name_;
    int salary_;
    int years_of_service_ = 0;
    int performance_score_ = 0;
};

class Manager: public Employee{
public:
//    void set_goals(){
//        cout<<"Set goals for Marketing"<<endl;
//    }
    Manager(string name, int salary,string department) : Employee(name,salary), department_(department) {}
    void print_report() const override {
        Employee::print_report();
        std::cout << "Department: " << department_ << std::endl;
    }

    void set_goals() {
        std::cout << "Set goals for " << department_ << std::endl;
    }

private:
    string department_;

};
class Programmer: public Employee{
public:
//    void write_code(){
//        cout<<"Writing code in C++"<<endl;
//    }
    Programmer(string name, int salary,string code) : Employee(name,salary), code_(code) {
    performance_score_=10;
}
    void print_report() const override {
        Employee::print_report();
        std::cout << "Language: " << code_ << std::endl;
    }

    void write_code() {
        std::cout << "Writing code in " << code_ << std::endl;
    }

private:
    string code_;

};
class Salesperson: public Employee{
public:
//    void sell(){
//        cout<<"Selling products, generated 100000 in revenue"<<endl;
//    }
    Salesperson(string name, int salary, int revenue) : Employee(name,salary), revenue_(revenue) {
        performance_score_=20;
}
    void print_report() const override {
        Employee::print_report();
        std::cout << "Sales: " << revenue_ << std::endl;
    }

    void sell() {
        std::cout << "Selling products, generated " << revenue_ << " in revenue" << std::endl;
    }

private:
    int revenue_;
};

#endif //INHERITANCE_HIERARCHY_EMPLOYEE_H
