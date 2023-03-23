#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string,size_t> &a, const pair<string,size_t> &b){
    if (a.second==b.second){
        return a.first>b.first;
    }
    return a.second>b.second;
}

int main() {
    map<string,size_t> words;
    string w;
    while (cin>>w && w!="^"){
        auto search= words.find(w);
        if (search!=words.end()){
            words[w]++;
        }
        else{
            words.insert({w,1});
        }

    }
    vector<pair<string,size_t>> vec(words.begin(),words.end());
    vec.sort(vec.begin(),vec.end(),cmp);
    map(vec.begin(),vec.end());





    return 0;
}
