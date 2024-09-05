#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s1 = "hello world";
    string substring = "world";
    auto it = search(s1.begin(), s1.end(), substring.begin(), substring.end());
    if(it!= s1.end()){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}
