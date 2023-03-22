#include <iostream>
#include <memory>
using namespace std;

void update(int*a, int*b);

int main(){
    unique_ptr<int> a(new int{}),b(new int{});
    cin>>*a>>*b;
    update(a.get(),b.get());
    cout<<*a<<endl;
    cout<<*b<<endl;
}

void update(int*a, int*b){
    int temp1,temp2;
    temp1=*a+*b;
    temp2=*a-*b;
    *a=temp1;
    *b=temp2;
    return;

}