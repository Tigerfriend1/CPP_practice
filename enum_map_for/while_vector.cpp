#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    vector<int> v;
    while(cin>>num){
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cout<<size(v)<<" "<<v.front()<<" "<<v.back();

}