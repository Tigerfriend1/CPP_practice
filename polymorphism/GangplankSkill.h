//
// Created by 김태경 on 2023/06/01.
//

#ifndef POLYMORPHISM_GANGPLANKSKILL_H
#define POLYMORPHISM_GANGPLANKSKILL_H
#include <memory>
#include <string>
#include <map>
#include <iostream>
#include "Skill.h"
using namespace std;

class GangplankSkill: public Skill{
    virtual void q() override { cout<<"TRIAL BY FIRE (불의 심판)"<<endl;};
    virtual void w() override{cout<<"PARRRLEY (혀어어어업상)"<<endl; };
    virtual void e() override{ cout<<"REMOVE SCURVY (괴혈병 치료)"<<endl;};
    virtual void r() override{ cout<<"POWDER KEG (화약통)"<<endl;};
};

#endif //POLYMORPHISM_GANGPLANKSKILL_H
