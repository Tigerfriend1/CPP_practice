#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<int> s;
    int N;
    cin>>N;
    string str;
    for (int i=0; i<N; i++){
        cin>>str;
        if (str=="push"){
            int num;
            cin>>num;
            s.push(num);
        }
        else if(str=="pop"){
            if(s.empty()){
                cout<<"-1"<<endl;
            }
            else {
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        else if(str=="size"){
            cout<<s.size()<<endl;
        }
        else if(str=="empty"){
            cout<<s.empty()<<endl;
        }

    }
    return 0;
}
