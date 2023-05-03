//
// Created by 김태경 on 2023/05/03.
//

#ifndef MAP_WITH_OPERATOR_OVERLOADING_PERSON_H
#define MAP_WITH_OPERATOR_OVERLOADING_PERSON_H
#include <algorithm>
#include <map>
#include <vector>
static int id=1;
class Person {
public:
    Person(std::string name, size_t age) : name{name}, age{age} {
        // set ID with uniqueness
        ID=id;
        id++;
    }

    friend std::ostream& operator << (std::ostream& out, const Person& p) {
        out<<p.ID<<" "<<p.name<< " "<<p.age;
        return out;
    }

    bool operator < (const Person& rhs) const {
        return this->ID < rhs.ID;
    }

    class ComparatorByAge {
    public:
        bool operator()(const Person& lhs, const Person& rhs) const{
            return lhs.age<rhs.age;
        }
    };

    class ComparatorByName {
    public:
        // implementation
        bool operator()(const Person& lhs, const Person& rhs) const{
            return lhs.name<rhs.name;
        }
    };

private:
    long long ID;
    std::string name;
    size_t age;
};
#endif //MAP_WITH_OPERATOR_OVERLOADING_PERSON_H
