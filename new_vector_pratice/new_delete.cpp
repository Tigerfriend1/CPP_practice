#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int* arr=new int[N];
    for (int i=0;i<N;i++){
        cin>>arr[i];
    }
    int j;
    cin>>j;
    cout << arr[arr[j]]<<endl;
    delete[] arr;
    return 0;
}

