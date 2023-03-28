#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Item {

    std::string name;

    double price;

    int quantity;

};

bool cmp(Item a, Item b){
    return a.price<b.price;
}

bool isGrape(Item a){
    return a.name=="Grape";
}

bool isMoreEX(Item a){
    return a.price>2;
}
bool isZero(Item a){
    return a.quantity==0;
}

void printIn(Item a){
    cout<<a.name<<" "<<a.price<<" "<<a.quantity<<endl;
}

int main() {

    std::vector<Item> inventory = {

            {"Apple", 0.99, 10},

            {"Banana", 0.59, 20},

            {"Cherry", 1.49, 5},

            {"Dates", 2.99, 2},

            {"Elderberry", 3.99, 0},

            {"Fig", 2.49, 15},

            {"Grape", 0.79, 25},

            {"Honeydew", 1.29, 8},

            {"Indian Gooseberry", 2.99, 0},

            {"Jackfruit", 4.99, 1}


    };

    sort(inventory.begin(),inventory.end(), cmp);
    for_each(inventory.begin(),inventory.end(),printIn);
    auto it=
    find_if(inventory.begin(),inventory.end(),isGrape);
    cout<< "Item found: "<< it->name<<" "<<it->price<<" "<<it->quantity<<endl;
    auto it2=
    count_if(inventory.begin(),inventory.end(), isMoreEX);
    cout<< "Number of expensive items: "<< it2<<endl;
    auto it3
    = remove_if(inventory.begin(),inventory.end(), isZero);
    for_each(inventory.begin(),it3,printIn);


    return 0;

}