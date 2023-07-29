#include<iostream>

using namespace std;

int ascenBinarySearch(int arr[], int size , int key) {
      int start = 0 ;
      int end = size - 1 ;
      int mid = start + (end - start)/2;

      while (start<=end)
      {
        if (arr[mid]==key)
        {
            return mid;
        }
      
        if(key>arr[mid]){
            start = mid+1;

        }

        else
        {
            end = mid - 1;
        }
        

        mid = start + (end - start)/2;
      }
      return -1;
      
}

int decenBinarSearch(int arr[], int size , int key) {

int start = 0 ;
int end = size - 1 ;

while (start<=end) {
    int midd = start + (end - start)/2;
    if (arr[midd]==key)
    {
        return midd;
    }

    if (key<arr[midd])
    {
        start = midd + 1;

    }
    
    if (key > arr[midd])
    {
         end = midd - 1;

    }
    
   
}
     return -1 ;
}








int main () { 
    // int evenArr[6] = {4,8,23,44,78,98};
    // int oddArr[5] = {3,6,23,40,55};
    // int result = ascenBinarySearch(oddArr,5,23);
    // cout<<"key is present at index : " << result<< endl;

    int oddArr[10]={20,17,15,14,13,12,10,9,8,4};
    int result1 = decenBinarSearch(oddArr,10,9);
     cout<<"key is present at index : " << result1 << endl;
}