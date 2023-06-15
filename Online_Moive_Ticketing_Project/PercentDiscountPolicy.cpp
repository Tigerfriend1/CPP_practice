//
// Created by 김태경 on 2023/06/15.
//
//Screening(Movie movie, int sequence, std::tm whenScreened);
#include "PercentDiscountPolicy.h"

PercentDiscountPolicy::PercentDiscountPolicy(long fee, long percent, std::vector<std::shared_ptr<DiscountCondition>> conditions)
        : DiscountPolicy{std::move(conditions)}, percent(percent), fee(fee)  {}

Money PercentDiscountPolicy::getDiscountAmount(Screening &screening) {
    return Money(fee*percent/100);
}


