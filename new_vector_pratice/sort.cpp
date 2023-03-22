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
    sort(begin(vec),end(vec));
    for (int i=0;i<n;i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}