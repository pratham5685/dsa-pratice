#include<iostream>

using namespace std;

int fibonacci(int n){
    //base case 
    if(n<=1) return n;




    //hyposethesis desgin 
    int last = fibonacci(n-1);
    int secondlast = fibonacci(n-2);
    return last+secondlast;

}

int main (){
    int n ;
    n = 6 ;
    cout << fibonacci(n); // TC - 2 raised to n 
}