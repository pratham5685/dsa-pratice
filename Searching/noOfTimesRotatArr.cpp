#include<iostream>

using namespace std ;

int noOfTimesRotateArr(int arr[],int n){
    int s = 0 ;
    int e = n-1;

    while(s<=e) {
    int m = s + (e-s)/2;

    int prev = (m+n-1)%n;
    int next = (m+1)%n;

   if(arr[m]<=arr[prev] && arr[m]<=arr[next]){
      return m;
   }

   if(arr[s]<=arr[m]){
    s = m + 1;
   }

   if(arr[m]<=arr[e]){
    e = m - 1;
   }
    }

    return 0 ;
}







int main () {
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(int);
    int result = noOfTimesRotateArr(arr,n);
    cout << "No of times array a sorted arr rotated : " << result;
}