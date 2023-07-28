#include<iostream>
#include<bits/stdc++.h>

using namespace std;
string removeDuplicateLetters(string str){
    string ans="";
    vector <bool> map(26,false);
    for(int i = 0 ; i < str.length() ; i++){
        if(map[str[i]-'a']==false){
            ans += str[i];
            map[str[i]-'a']=true;

        };
    };
    return ans;
}

int main (){
      string str = "cbacdcbc";
  cout<<"Original String: "<<str<<endl;
  cout <<"After removing duplicates: " <<removeDuplicateLetters(str) << endl;
  return 0;
    
}