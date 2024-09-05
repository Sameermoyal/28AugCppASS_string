
#include<bits/stdc++.h>
using namespace std;

int sol(string &s1, char c){
    int count=0;
    for(auto it:s1){
        if(it==c){
            count++;
        }
    }
    return count;
}

int main(){
    
    string s1 = "mississippi";
    char c = 'i';
    cout<<sol(s1, c);
    
    return 0;
}
