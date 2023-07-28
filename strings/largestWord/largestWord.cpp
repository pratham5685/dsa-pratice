#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void MaxLengthWords(string str, string maxWord){
    int len = str.length();
    int i = 0; // idhar mistake hua
    int j = 0;
    int maxlength = 0 ;
    int maxStart = 0;
    

    while ( j <= str.length()){

       if(j<str.length() && str[j]!=' '){
           j++;
       }
       else{
          int current_length = j-i;
         
          if (current_length > maxlength){
            maxlength = current_length;
            maxStart = i ;
          }
          j++;
          i=j;
          
       }

    }//end
    cout << str.substr(maxStart,maxlength);

};


int main()
{
       string str = "Google Doc";
       string maxWord;
       MaxLengthWords(str, maxWord);
    //    char ch = 'A';
    //    cout << ch + 1 << endl;

  
      // cout << maxWord <<endl;

      return 0;
}
