#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
    string s = "01001101010";
    int count = 0 ;
    int x = 0 ;// track of 0
    int y = 0 ; // track of 1 
    for(int i = 0 ; i < s.length();i++){
        if(s[i]=='0'){
            x = x + 1 ;
        }
        else if(s[i]=='1'){
            y = y + 1;
        }

        if(x==y){
            count = count + 1;

        }
    }

    if(x!=y){
        cout << "-1"<< endl;
    }else{
        cout<< count;
    };
}