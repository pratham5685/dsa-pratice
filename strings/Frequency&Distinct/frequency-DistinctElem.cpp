#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void Printfrequency(string str){
    map<char,int> mpp;
    for(int i = 0 ; i<str.length() ; i++){
        mpp[str[i]]++;

    }

    // freqency 
    for (auto it : mpp){
        cout << "Frequency of "<< it.first <<" :  " << it.second <<endl;
    }
    // distinct elements
   
}
void printDistinct(string str){
    map<char,int> mpp;
    for(int i = 0 ; i<str.length() ; i++){
        mpp[str[i]]++;

    }


    // distinct elements
    for (auto it : mpp){
        if(it.second == 1){
            cout << " Distinct Element is : " << it.first << endl;
        }
    }
}

int main (){
      string str = "takeuforward";
      Printfrequency(str);
      string s ="yahoo";
      printDistinct(s);
      return 0;
    
}