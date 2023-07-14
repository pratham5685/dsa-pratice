#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void checkRotation(string s1 , string s2 , int s1len , int s2len){
    if(s1len!=s2len){
        cout<<"No"<< endl;
    }else{
        string temp= s1 + s1;
        if(temp.find(s2)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
int main (){
    string s1 = "ABACD";
    string s2 = "CDABA";
     
    int s1len = s1.length();
    int s2len = s2.length();

    checkRotation(s1,s2,s1len,s2len);

  
}