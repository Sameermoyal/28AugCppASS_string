#include<bits/stdc++.h>
using namespace std;

int sol(string &s1){
   int count = 0;
   for(auto it:s1){
       if(it=='a' || it=='i' || it == 'o' || it == 'u' || it == 'e'||
          it=='A' || it=='I' || it=='O' || it=='U' || it == 'E'
          ){
              count ++;
          }
   }
   return count;
}

int main(){
    
    string s1 = "OpenAI";
    cout<<sol(s1);
    
    return 0;
}
