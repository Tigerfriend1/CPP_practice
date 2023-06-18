//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_CANAWA_H
#define COMPUTER_SEARCH_PROGARM_CANAWA_H

#include "GPUList.h"
#include "SearchCondition.h"
#include "SortedCondition.h"
#include <iostream>
using namespace std;

class Canawa {
public:
void doing(GPUList& gpuList); //검색조건, 정렬조건을 확인하여 출력함.
private:
    shared_ptr<SearchCondition> searchCondition;
    shared_ptr<SortedCondition> sortedCondition;
};

#endif //COMPUTER_SEARCH_PROGARM_CANAWA_H
