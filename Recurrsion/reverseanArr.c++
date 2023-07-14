#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int start , int end){

  if( start >= end ){
    return;
  }
  

  swap(arr[start],arr[end]);
  reverseArr(arr,start+1,end-1);





}

void reverseArr1(int arr[],int i , int n ){

    if(i > (n/2)) return;

    swap(arr[i],arr[n-i-1]);
    reverseArr1(arr,i+1,n);
}






void printArr(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}




int main(){

int arr[] ={5,4,3,2,1};
int n = sizeof(arr)/sizeof(int);
printArr(arr,n);
cout << endl;
reverseArr(arr,0,n-1);  // 2 way
reverseArr1(arr,0,n); // 1 way

cout << "Reversed arr using recursion : ";
printArr(arr,n);
}