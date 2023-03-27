#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;

bool cmp(const pair<string,size_t> &a, const pair<string,size_t> &b){
    if (a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main() {
    map<string,size_t> words;
    string w;
    //int cnt=0;
    while (cin>>w && w!="^"){
        w=regex_replace(w, regex("[.|,|:|;]"), "");
        transform(w.begin(),w.end(),w.begin(),[](unsigned char c){return tolower(c);});

        auto search= words.find(w);
        if (search!=words.end()){
            words[w]++;
            //cnt++;
            //cout<<w<<"= "<<words[w]<<endl;
        }
        else{
            words.insert({w,1});
            //cnt++;
            //cout<<"new w= "<<words[w]<<endl;
        }

    }
    //words=regex_replace(words, regex("[.|,|:|;| ]"), "");
    cout<<"#Words: "<<size(words)<<endl;
    vector<pair<string,size_t>> vec(words.begin(),words.end());
    sort(vec.begin(),vec.end(),cmp);
    map<string,size_t> m(vec.begin(),vec.end());
    cout<<"TOP 5 Word Frequencies"<<endl;

    int a=0;
    for (const auto& kv : vec){
        if (a==5){
            break;
        }
        cout<<a+1<<" "<<kv.first<<": "<<kv.second<<endl;
        a++;
    }

    cout<<"Find Word Frequencies"<<endl;
    string input;
    while (cin>>input && input!="QUIT"){
        transform(input.begin(),input.end(),input.begin(),[](unsigned char c){return tolower(c);});
        auto s=words.end();
        if (s!=words.end()){
            cout<<input<<": "<<"0"<<endl;
        }
        else{
            cout<<input<<": "<<words[input]<<endl;
        }

    }
    cout<<endl<<"Bye!";






    return 0;
}
