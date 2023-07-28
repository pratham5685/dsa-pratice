#include<iostream>
#include<bits/stdc++.h>

using namespace std;
char maxOccurringChar(string str){
    map <char , int > mpp;
    for(int i = 0 ; i <str.length() ; i++){
        mpp[str[i]]++;
    }

    char ans = 0 ;
    int maxi = 0;
    for (auto it : mpp){
        maxi = max(maxi,it.second);
    }
    for(auto it : mpp){
        if(it.second == maxi){
            ans = it.first;
        }
    }
    return ans;
}

int main (){
    string str = "takeuforward";
   cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
    
}