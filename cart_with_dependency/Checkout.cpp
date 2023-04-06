//
// Created by 김태경 on 2023/04/05.
//
#include "Checkout.h"

int Checkout::calculateTotalPrice(std::vector<Item>::const_iterator begin, std::vector<Item>::const_iterator end) const {
//    int sum=0;
//    for (auto &it=begin; it<end;it++){
//        sum+=it->getPrice()*it->getQuantity();
//    }
//    return sum;
    int sum=0;
    for (auto &it=begin; it<end; it++){
        sum+=it->getPrice()*it->getQuantity();
    }
    if (this->discountCode==DISCOUNT_20){
        sum=sum*4/5;
    }
    else if (this->discountCode==DISCOUNT_50){
        sum=sum/2;
    }
    return sum;
}

void Checkout::setShippingAddress(const string &shippingAddress) {
    this->shippingAddress=shippingAddress;
}

void Checkout::setDiscountCode(DiscountCode discountCode) {
    this->discountCode=discountCode;
}

