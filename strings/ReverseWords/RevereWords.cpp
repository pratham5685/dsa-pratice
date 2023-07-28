#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string result(string s)
{
    int start = 0;
    int end = s.length()-1;
    
    string word="";
    string ans="";
   while (start<=end){
    //
    if(s[start]==' '){
        if(ans!=""){
            ans = word +" "+ans; 
        }
        else{
            ans=word;
        }
        word ="";

    } else if (s[start]!=' '){
          word += s[start];
    }
    


   start++;

   }

   // for last word
   if(word!=""){
      if(ans!=""){
          ans = word + " " + ans;
      } else if(ans ==""){
        word = ans;

      }
   }


   return ans;

}
int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}