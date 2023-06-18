//
// Created by 김태경 on 2023/06/16.
//

#include "GPU.h"

GPU::GPU(string name, int price, string chipset) : name(name), price(price), chipset(chipset){}

int GPU::getPrice() {
    return price;
}

string GPU::getChipset() {
    return chipset;
}
