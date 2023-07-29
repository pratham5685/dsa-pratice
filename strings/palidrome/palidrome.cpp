#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// method 1 
string isPalindrome1(string S){
    string P = S;

    reverse(P.begin(),P.end());

    if (P == S){
       return "yes";
    }
    else {
        return "No";
    }
}

// method 2 
string isPalindrome2(string s){
    int len = s.length();
    for (int i = 0 ; i < len / 2; i++){
        if(s[i]!=s[len-i-1]){
            return "NO";
            break;
        }
    }

   
        return "Yes";
    

}

// to lower case

char toLowerCase (char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp;
        temp = ch - 'A' + 'a';
        return temp; 
    }
}


int main (){
    string S = "udbhav";
   // cout << isPalindrome1(S);
    cout << isPalindrome2(S);
 
    return 0;
    char j = 's'
    // converting char to lower case
     
      cout << toLowerCase('B');
}