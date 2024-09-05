#include<bits/stdc++.h>
using namespace std;

int sol(string &s1 , char c){
   for(int i=s1.length()-1;i>=0;i--){
       if(s1[i]==c){
           return i;
       }
   }
   return -1;
}

int main(){
    
    string s1 = "mississippi";
    char c = 's';
    cout<<sol(s1, c);
    
    return 0;
}
