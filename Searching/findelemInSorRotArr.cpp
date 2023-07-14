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
};


int resultOfFirstHalf(int arr[] , int n , int key ){

int index = noOfTimesRotateArr(arr,n);

int s = 0 ; 
int e = index -1 ;


    while (s<=e) {
         int m = s + (e-s)/2;

         if (arr[m]==key)
         {
            return m;
         }
         else if (key > arr[m])
         {
            s= m +1;
         }
         else if (key < arr[m]){
            e = m -1 ;
         }
         else{
            return -1 ;
         }
      
    }
    return -1 ;

};




int resultOfSecondHalf(int arr[] , int n , int key ){

int index = noOfTimesRotateArr(arr,n);

int s = index ; 
int e = n-1 ;


    while (s<=e) {
         int m = s + (e-s)/2;

         if (arr[m]==key)
         {
            return m;
         }
         else if (key > arr[m])
         {
            s= m +1;
         }
         else if (key < arr[m]){
            e = m -1 ;
         }
         else{
            return -1 ;
         }
      
    }
    return -1 ;

}

int main () {  //0   1   2  3  4   5
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(int);
 //   int index = noOfTimesRotateArr(arr,n);
  //  cout << "index :  " << index;

int result1 = resultOfFirstHalf(arr,n,6);
int result2 = resultOfSecondHalf(arr,n,6);
cout << result1 << endl;
cout << result2 << endl;


}