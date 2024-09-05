#include<bits/stdc++.h>
using namespace std;

bool sol(string s1, string s2){
    int p = 0;
    for(int i=0;i<s2.length() && p<s1.length(); i++){
        if(s1[p] == s2[i]){
            p++;
        }
    }
    return p==s1.length();
}

int main(){
    
    string s1 = "abc";
    string s2 = "aebdc";
    
    if(sol(s1,s2)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}
