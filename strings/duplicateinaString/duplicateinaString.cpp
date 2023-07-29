#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){

    string s = "devvaansh";

    map <char,int> mpp;
    for(int i = 0 ; i < s.length() ; i++){
        mpp[s[i]]++;
    }

    for(auto it : mpp){
        if(it.second >= 2){
            cout << it.first<<" ";
        }
    }

}