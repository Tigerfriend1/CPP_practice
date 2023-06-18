//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_MOSTPRICESORTEDCONDITION_H
#define COMPUTER_SEARCH_PROGARM_MOSTPRICESORTEDCONDITION_H

#include "SortedCondition.h"
class MostPriceSortedCondition: public SortedCondition{
public:
    MostPriceSortedCondition(){value=1;}
    bool checkCondition() override;
    GPUList sorted(GPUList gpulist) override;
};

#endif //COMPUTER_SEARCH_PROGARM_MOSTPRICESORTEDCONDITION_H
