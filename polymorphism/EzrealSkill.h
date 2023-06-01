//
// Created by 김태경 on 2023/06/01.
//

#ifndef POLYMORPHISM_EZREALSKILL_H
#define POLYMORPHISM_EZREALSKILL_H
#include <memory>
#include <string>
#include <map>
#include <iostream>
#include "Skill.h"
using namespace std;

class EzrealSkill: public Skill{
    virtual void q() override {cout<<"RISING SPELL FORCE (끓어오르는 주문의 힘)"<<endl; };
    virtual void w() override{cout<<"MYSTIC SHOT (신비한 화살)"<<endl; };
    virtual void e() override{ cout<<"ESSENCE FLUX (정수의 흐름)"<<endl;};
    virtual void r() override{ cout<<"ARCANE SHIFT (비전 이동)"<<endl;};
    //virtual ~Skill() override{ };
};

#endif //POLYMORPHISM_EZREALSKILL_H
