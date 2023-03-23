#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,string> phonebook;
    int N;
    cin>>N;
    for (int i=0;i<N;i++){
        string name,phonenum;
        cin>>name>>phonenum;
        phonebook.insert({name,phonenum});

    }
    while (true){
        string inputname;
        cin>> inputname;
        if (inputname=="QUIT"){
            break;
        }
        if (phonebook.find(inputname)!=phonebook.end()){
            cout<<phonebook[inputname]<<endl;
        }
        else{
            cout<<"NOT FOUND"<<endl;
        }

    }

}