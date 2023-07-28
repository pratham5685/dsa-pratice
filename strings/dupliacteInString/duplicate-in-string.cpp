#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main (){
     string str = "sinstriiintng";

     map <char,int>mpp;
     for(int i = 0 ; i < str.length(); i++){
           mpp[str[i]]++;

     }

     for(auto it : mpp){
        if(it.second >1){
        cout<<it.first<< ": " << it.second<<endl;
        };
     }
      
}