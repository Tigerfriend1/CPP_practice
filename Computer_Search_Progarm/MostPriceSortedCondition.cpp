//
// Created by 김태경 on 2023/06/16.
//
#include "MostPriceSortedCondition.h"

bool MostPriceSortedCondition::checkCondition() {
    return value;
}

GPUList MostPriceSortedCondition::sorted(GPUList gpulist) {
    auto gpuList = gpulist.getGPUList();

    std::sort(gpuList.begin(), gpuList.end(), [](const std::unique_ptr<GPU>& a, const std::unique_ptr<GPU>& b) {
        return a->getPrice() < b->getPrice();
    });

    return gpulist;
}

