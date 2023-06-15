//
// Created by 김태경 on 2023/06/15.
//

#ifndef ONLINE_MOIVE_TICKETING_PROJECT_SEQUENCECONDITION_H
#define ONLINE_MOIVE_TICKETING_PROJECT_SEQUENCECONDITION_H

#include <iostream>
#include "Screening.h"
#include "DiscountCondition.h"

class SequenceCondition : public DiscountCondition{
public:
    SequenceCondition(int _sequence);
    bool test(Screening& screening) override;
private:
    int sequence;
};

#endif //ONLINE_MOIVE_TICKETING_PROJECT_SEQUENCECONDITION_H
