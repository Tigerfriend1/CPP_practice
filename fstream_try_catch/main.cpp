#include <iostream>

#include <fstream>

#include <string>

using namespace std;
int main() {

    // ifstream, ofstream 은 자동으로 연 파일을 닫는다.
    ifstream fin;
    try{
        fin.exceptions(ios_base::failbit | ios_base::badbit);
        fin.open("config.ini");     //default   is   ios_base::in


    } catch (const exception& e){
        cerr << e.what() << endl;

    }


    ofstream fout;
    try {
        fin.exceptions(ios_base::failbit | ios_base::badbit);
        fout.open("config/config.ini");    //default   is   ios_base::out

    }catch (const exception& e){
        cerr << e.what() << endl;
    }
    fout << "This is an example for the exception in C++!" << endl;

    return 0;
}
