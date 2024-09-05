#include<bits/stdc++.h>
using namespace std;

int sol(string s1, string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int mini = min(len1, len2);
    
    for(int i=0;i<mini;i++){
        if(s1[i]-s2[i] !=0){
            return s1[i]-s2[i];
        }
    }
    return len1-len2;
}

int main(){
    
    string s1 = "apple";
    string s2 = "banana";
    
    int ans  =  sol(s1,s2);
    
    if(ans <0){
        cout<<s1<<" comes before";
    }else if(ans>0){
        cout<<s2<<" comes before";
    }else{
        cout<<"both are equel";
    }
    
    return 0;
}
