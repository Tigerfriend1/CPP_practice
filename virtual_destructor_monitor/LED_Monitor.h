//
// Created by 김태경 on 2023/05/24.
//

#ifndef INHERITANCE_MONITOR_LED_MONITOR_H
#define INHERITANCE_MONITOR_LED_MONITOR_H
#include "Monitor.h"

class LED_Monitor: public Monitor{
public:
    LED_Monitor(){
        cout<<"LED_Monitor constructor"<<endl;
    }
    ~LED_Monitor(){
        cout<<"LED_Monitor destructor"<<endl;
    }
};
#endif //INHERITANCE_MONITOR_LED_MONITOR_H
