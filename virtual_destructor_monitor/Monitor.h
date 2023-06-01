//
// Created by 김태경 on 2023/05/24.
//

#ifndef INHERITANCE_MONITOR_MONITOR_H
#define INHERITANCE_MONITOR_MONITOR_H
#include "OutputDevice.h"
class Monitor: public OutputDevice{
public:
    Monitor(){
        cout<< "Monitor constructor"<<endl;
    };
    ~Monitor(){
        cout<<"Monitor destructor"<<endl;
    }
};
#endif //INHERITANCE_MONITOR_MONITOR_H
