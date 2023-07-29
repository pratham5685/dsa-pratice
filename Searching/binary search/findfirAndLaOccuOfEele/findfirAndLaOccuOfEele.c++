#include<iostream>

using namespace std;

int searchFirOcc(int arr[], int size , int key ) {
     int start = 0 ;
     int end = size - 1;
     int result = -1 ;

     while (start<=end) {
        
        int midd = start + (end - start)/2;

        if(key==arr[midd]) {
            result =  midd ;
            end = midd - 1 ;
        }

        if(key>arr[midd]){
            start = midd+1;

        }

       if( key < arr[midd])
        {
            end = midd - 1;
        }
    
     }
     return result;
};


int lastOcc(int arr[],int n , int key ){

int s = 0 ;
int e = n-1 ;
int ans = -1 ;
// int mid = s + (e-s)/2;

while (s<=e) {
    int mid = s + (e-s)/2;
   if(arr[mid]==key){
    ans = mid;
    s= mid + 1;
   }
   else if(key>arr[mid]){
      s= mid + 1;
   } 
   else if (key<arr[mid]){
    e= mid -1 ;
   }

  // mid = s + (e-s)/2;
}
return ans;
};

int main () { // 0 1 2 3 4 5 6 7
    int arr[8] ={2,4,5,6,7,7,7,9};
    int result1 = searchFirOcc(arr,8,7);
    cout << "First Occurance of 3  is : " << result1 << endl;


     int result2 = lastOcc(arr,8,7);
    cout << "last Occurance of 3  is : " << result2 << endl; 
}