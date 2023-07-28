#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void solve(string str, int length){
   for(int i = 0 ; i < length ; i++){
     
      
       if(str[i]=='z'){
        str[i]='a';
      } else{
         str[i]=str[i]+1;
      }

   }
   cout << str << endl;

}
int main (){


  string str = "abcdxyz";
  int length = str.length();
  cout<<"Original String: "<<"\n";
  cout<<str<<endl;
  cout << "New string: " << "\n";
  solve(str, length);

  return 0;
}
