//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_SEARCHCONDITION_H
#define COMPUTER_SEARCH_PROGARM_SEARCHCONDITION_H
#include "GPUList.h"
class SearchCondition{
public:
    ~SearchCondition();
    virtual bool checkCondition()=0;
    virtual GPUList search(GPUList gpulist)=0;
protected:
    int value=0;
};

#endif //COMPUTER_SEARCH_PROGARM_SEARCHCONDITION_H
