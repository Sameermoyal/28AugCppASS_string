#include<bits/stdc++.h>
using namespace std;

int sol(string &s1 , char c){
   for(int i=0;i<s1.length();i++){
       if(s1[i]==c){
           return i;
       }
   }
   return -1;
}

int main(){
    
    string s1 = "OpenAI";
    char c = 'A';
    cout<<sol(s1, c);
    
    return 0;
}
