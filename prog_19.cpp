#include<bits/stdc++.h>
using namespace std;

map<char,int> sol(string s1){
    map<char,int> mapi;
    for(auto it:s1){
        mapi[it]++;
    }
    return mapi;
}

int main(){
    
    string s1 = "hello";
    
    map<char,int> ans = sol(s1);
    
    for(auto it:ans){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}
