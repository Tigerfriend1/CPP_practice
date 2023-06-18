//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_GPULIST_H
#define COMPUTER_SEARCH_PROGARM_GPULIST_H

#include "GPU.h"
class GPUList{
public:
    GPUList();
    vector<unique_ptr<GPU>> getGPUList();
    void addGPU(string name, int price, string chipset);
    void printList();
private:
    vector<unique_ptr<GPU>> gpulist;
};

#endif //COMPUTER_SEARCH_PROGARM_GPULIST_H
