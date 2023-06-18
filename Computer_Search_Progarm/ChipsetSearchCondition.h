//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_CHIPSETSEARCHCONDITION_H
#define COMPUTER_SEARCH_PROGARM_CHIPSETSEARCHCONDITION_H

#include "SearchCondition.h"
class ChipsetSearchCondition:public SearchCondition{
public:
    ChipsetSearchCondition(){value = 1;} //생성되면 value를 1로 만듦
    bool checkCondition() override;
    GPUList search(GPUList gpulist) override;
};

#endif //COMPUTER_SEARCH_PROGARM_CHIPSETSEARCHCONDITION_H
