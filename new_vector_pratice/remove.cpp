#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> vec;
    for (int i=0; i<n; i++){
        int l;
        cin>>l;
        vec.push_back(l);
    }
    int a;
    cin>>a;
    vec.erase(vec.begin()+a);
    int b;
    cin>>b;
    for (auto i=vec.begin(); i!=vec.end();i++) {
        if (*i== b) {
           i = vec.erase(i)-1;
        }
    }
    cout<<size(vec)<<endl;
    for (auto i : vec){
        cout<<i<<" ";
    }
    return 0;
}