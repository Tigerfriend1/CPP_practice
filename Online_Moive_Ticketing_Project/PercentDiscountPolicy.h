//
// Created by 김태경 on 2023/06/15.
//
// 비율할인정책: 정가에서 일정 비율의 요금을 할인해 주는 방식 (비율할인정책이 30%이면, 예매 가격은 7,000원)
// 예매 가격이 10,000원인 둠(Doom)을 예매
//• 두 개의 순번조건 (조조, 10번째)
//• 두 개의 기간 조건 (월요일 10시에서 12시, 목요일 18시에서 21시 사이)
//• -> 이 조건을 만족하면 2,000원으로 영화를 예매할 수 있음
// 위 조건을 기준으로 구현
#ifndef ONLINE_MOIVE_TICKETING_PROJECT_PERCENTDISCOUNTPOLICY_H
#define ONLINE_MOIVE_TICKETING_PROJECT_PERCENTDISCOUNTPOLICY_H

#include "DiscountPolicy.h"

class PercentDiscountPolicy: public DiscountPolicy{
public:
    PercentDiscountPolicy(long fee, long percent, std::vector<std::shared_ptr<DiscountCondition>> conditions);
protected:
    Money getDiscountAmount(Screening& screening) override ;
private:
    long percent;
    long fee;
};

#endif //ONLINE_MOIVE_TICKETING_PROJECT_PERCENTDISCOUNTPOLICY_H
