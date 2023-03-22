#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >>n>>m;
    vector<vector<int>> vec(n);
    for (int i=0; i<n; i++){
        int N;
        cin>>N;
        for (int j=0;j<N;j++){
            int l;
            cin>>l;
            vec[i].push_back(l);
        }
    }
    for (int i=0;i<m;i++){
        int num1,num2;
        cin>>num1>>num2;
        cout<<vec[num1][num2]<<endl;
    }
    return 0;
}