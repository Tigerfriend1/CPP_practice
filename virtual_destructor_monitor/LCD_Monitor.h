//
// Created by 김태경 on 2023/05/24.
//

#ifndef INHERITANCE_MONITOR_LCD_MONITOR_H
#define INHERITANCE_MONITOR_LCD_MONITOR_H
#include "Monitor.h"

class LCD_Monitor: public Monitor{
public:
    LCD_Monitor(){
        cout<<"LCD_Monitor constructor"<<endl;
    }
    ~LCD_Monitor(){
        cout<<"LCD_Monitor destructor"<<endl;
    }
};

#endif //INHERITANCE_MONITOR_LCD_MONITOR_H
