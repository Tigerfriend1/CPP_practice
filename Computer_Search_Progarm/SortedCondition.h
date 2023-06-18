//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_SORTEDCONDITION_H
#define COMPUTER_SEARCH_PROGARM_SORTEDCONDITION_H
#include "GPUList.h"

class SortedCondition{
public:
    ~SortedCondition();
    virtual bool checkCondition()=0;
    virtual GPUList sorted(GPUList gpulist)=0;

protected:
    int value=0;
};

#endif //COMPUTER_SEARCH_PROGARM_SORTEDCONDITION_H
