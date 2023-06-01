//
// Created by 김태경 on 2023/05/24.
//

#ifndef INHERITANCE_MONITOR_OUTPUTDEVICE_H
#define INHERITANCE_MONITOR_OUTPUTDEVICE_H
#include <iostream>
using namespace std;
class OutputDevice{
public:
    OutputDevice(){
        cout<<"OutputDevice constructor"<<endl;
    }
    virtual ~OutputDevice(){
         cout<<"OutputDevice destructor"<<endl;
    }
};
#endif //INHERITANCE_MONITOR_OUTPUTDEVICE_H
