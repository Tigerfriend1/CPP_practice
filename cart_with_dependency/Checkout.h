//
// Created by 김태경 on 2023/04/05.
//

#ifndef CART_WITH_DEPENDENCY_CHECKOUT_H
#define CART_WITH_DEPENDENCY_CHECKOUT_H
#include "Item.h"
#include <string>
#include <vector>
using namespace std;
enum DiscountCode {
    NO_DISCOUNT,
    DISCOUNT_20,
    DISCOUNT_50
};

class Checkout {
public:
    Checkout(DiscountCode discountCode=NO_DISCOUNT) : discountCode(discountCode) {}

    int calculateTotalPrice(std::vector<Item>::const_iterator begin,
                            std::vector<Item>::const_iterator end) const;

    void setShippingAddress(const std::string &shippingAddress);
    void setDiscountCode(DiscountCode discountCode);

private:
    std::string shippingAddress;
    DiscountCode discountCode;
};
#endif //CART_WITH_DEPENDENCY_CHECKOUT_H
