//
// Created by 김태경 on 2023/06/16.
//

#ifndef COMPUTER_SEARCH_PROGARM_GPU_H
#define COMPUTER_SEARCH_PROGARM_GPU_H
#include <string>
#include <vector>
#include <memory>
#include <iostream>
using namespace std;
class GPU {
public:
    GPU();
    GPU(string name, int price, string chipset);
    int getPrice();
    string getChipset();
friend std::ostream &operator<<(std::ostream& os, GPU gpu){
    os <<"name = "<< gpu.name << " price = "<<gpu.price<<" chipset = "<<gpu.chipset<<endl;
}
private:
    string name;
    int price;
    string chipset;

};



#endif //COMPUTER_SEARCH_PROGARM_GPU_H
