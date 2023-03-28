#include <iostream>
#include <map>
#include <string>
using namespace std;
int MONEY=0;
void addItem(map<string,int> &inventory, string item, float money){
    auto a=inventory.find(item);
    if (a!=inventory.end()){
        inventory[item]++;
    }
    else inventory.insert({item,1});
    MONEY+=money;


}
void addItem(map<string,int> &inventory, string item, int cnt){
    auto a=inventory.find(item);
    if (a!=inventory.end()){
        inventory[item]+=cnt;
    }
    else inventory.insert({item,cnt});

}

int main() {
    map<string,int> inventory;
    addItem(inventory,"sword",1);
    addItem(inventory,"shield",2);
    addItem(inventory,"shield",5.0F);
    addItem(inventory,"armor",3.0F);
    cout<<"MONEY "<<MONEY<<endl;
    for(const auto&[key,value]:inventory) {
        cout << key << " " << value << endl;
    }
    return 0;
}
