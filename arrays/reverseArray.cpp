#include<iostream>

using namespace std ;
void reverse (int arr[], int n ){


   int start = 0 ; // start element
   int end ;
   end = n - 1 ; // last element 
   while (start <= end )
   {
       swap(arr[start],arr[end]);
   start = start + 1 ;
   end   = end   - 1 ;
   }
   
   
};

void printArray (int arr[] , int n ) {
    for (int i = 0; i < n ; i++)
    {
       cout << arr[i] << " ";
    }
    cout<< endl;
}

int main () {    
    int arr1[6] = {2,3,8,97,56,3}; // even array
    int arr2[5] = {77,4,24,9,1}; // odd araay
   
    reverse(arr1,6);
    reverse(arr2,5);
    printArray(arr1,6);
    
    printArray(arr2,5);
}