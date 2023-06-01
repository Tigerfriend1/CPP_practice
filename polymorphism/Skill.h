//
// Created by 김태경 on 2023/06/01.
//

#ifndef POLYMORPHISM_SKILL_H
#define POLYMORPHISM_SKILL_H


using namespace std;

class Skill {
public:
    virtual void q() { };
    virtual void w() { };
    virtual void e() { };
    virtual void r() { };
    virtual ~Skill() { };
};

#endif //POLYMORPHISM_SKILL_H
