#include<bits/stdc++.h>
using namespace std;

string sol(string &s1){
    string tem;
    for(auto it:s1){
        if(it!=' '){
            tem+=it;
        }
    }
    return tem;
}

int main(){
    
    string s1 = "hello world";
    cout<<sol(s1);
    
    return 0;
}
