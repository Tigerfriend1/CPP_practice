//
// Created by 김태경 on 2023/06/16.
//
#include "GPUList.h"
using namespace std;
void GPUList::addGPU(string name, int price, string chipset) {
    gpulist.push_back(make_unique<GPU>(name, price, chipset));
}

void GPUList::printList() {
    for (auto& g : gpulist){
        cout<<*g<<endl;
    }

}

vector<unique_ptr<GPU>> GPUList::getGPUList() {
    return std::move(gpulist);
}
