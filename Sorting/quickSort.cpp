#include<iostream>
#include <bits/stdc++.h> 

int parition(int arr[] ,int low,int high){
    int pivot = arr[low];
    int i = low ;
    int j = high ;

    while (i<j){
        while( arr[i] <= pivot ){
            i++;
        }
        while( arr[j] > pivot  ){
            j--;
        }

        if(i < j){
            std::swap(arr[i],arr[j]);
        }

    } // end of main while;
      std::swap(arr[low],arr[j]);
      return j;

}// end of int

void qs(int arr[], int low , int high ){

    if(low < high){
        int paritionVal = parition(arr,low,high);
        qs(arr,low,paritionVal-1);
        qs(arr,paritionVal+1,high);

    };
};

int main(){
    int arr[]= {4 ,2 ,5 ,1 ,3};
    int n = sizeof(arr)/sizeof(int);

    qs(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    
   // return arr;
}