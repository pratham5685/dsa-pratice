#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void Capitalize(string s, int size){
    for(int i = 0; i < s.length() ; i++){
         if(s[i]==' '){
            s[i-1]=toupper(s[i-1]);
            s[i+1]=toupper(s[i+1]);
         }
    }

    s[0]=toupper(s[0]);
    s[s.length()-1]=toupper(s[s.length()-1]);
    cout << s<< endl;

}

int main (){
  string str = "take u forward Is awesome";
  int size = str.length();

  Capitalize(str, size);
  return 0;
    
}