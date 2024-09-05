#include<bits/stdc++.h>
using namespace std;

int sol(string s1){
    int count = 0;
    
    for(auto it:s1){
        if(it!=' '){
            count++;
        }
        
    }
    return count;
}

int main(){
    
    string s1 = "OpenAI is amazing";
    
    cout<<sol(s1);
    
    
    
    return 0;
}
