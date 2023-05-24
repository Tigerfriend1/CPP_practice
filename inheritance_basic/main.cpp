#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
public:
    Person(string name): name(name){
        cout<<"Person is constructed!"<<endl;
    }
    ~Person(){
        cout<<"Person is destructed!"<<endl;
    }
    string getName(){
        return name;
    }
    void print(){
        cout<<"Person Name: "<<getName()<<endl;

    }
   friend std::ostream& operator<<(std::ostream& os, const Person& p);

private:
    //vector<string> names;
    std::string name;
};

class Student: public Person{
public:
    Student(string name, string schoolName) : Person(name), schoolName(schoolName)  {
        cout<<"Student is constructed!"<<endl;
    }
    ~Student(){
        cout<<"Student is destructed!"<<endl;
    }
    string getSchoolName(){
        return schoolName;
    }
    void print(){
        cout<<"Person Name: "<<getName()<<endl;
        cout<<"School Name: "<<getSchoolName()<<endl;
    }
private:
    std::string schoolName;
};

std::ostream& operator<<(std::ostream& os, const Person& p){
    os<<"Person Name: "<<p.name<<endl;
    return os;
}

int main() {
    Person p1{"Park"};
    p1.print();

    Student s1 {"Kim", "PNU"};
    s1.print();

    return 0;
}