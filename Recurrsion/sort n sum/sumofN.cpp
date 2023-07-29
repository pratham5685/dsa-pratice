#include<iostream>
using namespace std;
int sumofN(int n){
    // base case 
    if(n==1) return 1;

    //hypothesis
     
    return n + sumofN(n-1);
    


    //induction
}


int main (){
    int n ;
    cout << "Enter n : ";
    cin>>n;
    cout << sumofN(n) << endl;
}