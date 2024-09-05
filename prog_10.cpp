#include<bits/stdc++.h>
using namespace std;

void sol(string &s1){
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='l'){
            s1[i]='x';
        }
    }
}

int main(){
    
    string s1 = "hello";
    sol(s1);
    cout<<s1;
    
    return 0;
}
