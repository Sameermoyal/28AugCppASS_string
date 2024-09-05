#include<bits/stdc++.h>
using namespace std;

void rev(string &s1){
    int s = 0;
    int e = s1.length()-1;
    
    while(s<e){
        swap(s1[s],s1[e]);
        s++;
        e--;
    }
}

int main(){
    
    string s1 = "OpenAI is amazing";
    rev(s1);
    
    cout<<s1;
    
    return 0;
}
