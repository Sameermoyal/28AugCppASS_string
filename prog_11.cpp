#include<bits/stdc++.h>
using namespace std;

void sol(string &s1){
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]=s1[i]-('a'-'A');
        }
    }
}

int main(){
    
    string s1 = "openai";
    sol(s1);
    cout<<s1;
    
    return 0;
}
