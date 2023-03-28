#include "shape.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str;
    while(cin>>str && str!="QUIT"){
        if (str=="RECT"){
            int a1,b1,a2,b2;
            cin>>a1>>b1>>a2>>b2;
            Point p1{a1,b1};
            Point p2{a2,b2};
            create_rectangle(p1, p2);
        }
        else if(str=="PRINT"){
            print_shapes();
        }
        else if(str=="CIRCLE"){
            int a,b,r;
            cin>>a>>b>>r;
            Point center{a,b};
            create_circle(center,r);
        }
    }


    return 0;
}
