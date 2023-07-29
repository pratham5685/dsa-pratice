#include <iostream>
using namespace std ;

int  factorialN(int n){
    if(n==0) return 1;

    return n *factorialN(n-1);
    
}

void print1toN(int n){
    // base condition
    if(n==0) {
        //cout <<n << " ";
        return;
        }

    // hypothesis desgin
    print1toN(n-1);
    

    // induction statement
    cout << n << " ";
};



void printNto1(int n){
//base condition
if(n==1) {
    cout << n << " ";
    return;
}

// induction
cout << n << " ";

// hypothesis
printNto1(n-1);


};



int main(){
    int n ;
    cout << "Enter n : "<< endl;
    cin>>n;

   // cout << factorialN(n) << endl; // factorial ques

// print1toN(n); // 1 to n 
 printNto1(n);
}