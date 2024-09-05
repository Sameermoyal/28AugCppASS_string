#include<bits/stdc++.h>
using namespace std;

bool sol(string &s1){
   string tem = s1;
   int s=0;
   int e=tem.length()-1;
   while(s<e){
       swap(tem[s],tem[e]);
       s++;
       e--;
   }
   return s1==tem;
}

int main(){
    
    string s1 = "racecar";
    if(sol(s1)){
        cout<<"it is palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
    
    return 0;
}
