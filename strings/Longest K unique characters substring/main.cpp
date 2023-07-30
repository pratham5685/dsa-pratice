#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int solve (string s, int k){
        int i = 0 ;
        int j = 0 ;
        int n = s.length();
         unordered_map <char,int> mpp ;
        
         
         int ans = INT_MIN ;
         
         while (j<n){
             
             // calculation adding elements j to map;
             mpp[s[j]]++;
             
             // 1 case 
             if( mpp.size() < k ){
                 j++;
             }
             
             // 2 case 
             else if( mpp.size() == k ){
                 if(j-i+1 > ans){
                     ans = j-i+1;
                     j++;
                 }
             }
             
             // 3 case 
             else if ( mpp.size() > k ){
                 while( mpp.size() > k ){
                     mpp[s[i]]--;
                     if(mpp[s[i]]==0){
                         mpp.erase(s[i]);
                         
                     }
                     
                     i++;
                 }
                 
                 j++;
             }
 
         }// end of main while loop
         
    return ans;
    

}

int main (){

    string s = "aabacbebebe";
    int k = 3;
    int ans = solve(s,k);
    cout << ans << endl;

}