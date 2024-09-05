#include<bits/stdc++.h>
using namespace std;

string sol(string &s1){
    string tem;
    unordered_set<char> seti;
    
    for(auto it:s1){
        if(seti.find(it) == seti.end()){
            tem+=it;
            seti.insert(it);
        }
    }
    
    return tem;
}

int main(){
    
    string s1 = "programming";
    
    cout<<sol(s1);
    
    return 0;
}
