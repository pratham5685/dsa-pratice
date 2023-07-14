#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ncr function h ye bhai dekh le
int ncr(int a , int b) { 
    int n = a -1 ;
    int r = b-1;
    long long ans = 1 ;
    for (int i = 0 ; i < r ; i++){
        ans = ans * (n-i);
        ans = ans /(i+1);
        
    }
    return ans ;

}

void generateRow (int row ){
   long long res = 1;
   cout<<res<<" ";
   // vector <int> ansRow;
   // ansRow.push_back(1);
    for(int col = 1; col < row ; col++){
        
        res = res * (row - col);
        res = res/(col) ;
        cout<<res<<" ";
       // ansRow.push_back(res);
    };

 
    
};



int main(){
    //Q1) given r and c find element at that place

    // int res = ncr(6,5);
    // cout << res << endl;

    //Q2) print n th row of pascals triangle

    //  generateRow(6);

    // Q3) print pascals till n 
    int n = 3 ;
   int i = 1 ;
   while(i<=6){
    generateRow(i);
    cout<<" "<< endl;
    i++;
   };
    

   
   
}
