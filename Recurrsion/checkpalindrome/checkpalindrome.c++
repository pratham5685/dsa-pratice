#include<iostream>
#include<bits/stdc++.h>


using namespace std;
bool palindrome(string s , int i , int n){
    if(i>=n/2) return true ;

    if(s[i] != s[n-i-1]) return false;
    return palindrome(s,i+1,n);


}

int main(){
    string s = "maddgdam";
    int n = s.length();
   cout <<  palindrome(s , 0 , n);

}