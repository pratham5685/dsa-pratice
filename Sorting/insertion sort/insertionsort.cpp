#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for(int i =1; i <= n -1  ; i++){

        int temp = arr[i];
        int j ;
        for ( j = i-1 ; j>=0 ; j--){

            if (arr[j]>temp){
                // right shift
                arr[j+1] = arr[j];
            }else{
                break; // its sorted already
            }

        } // end of inner loop
       arr[j+1]=temp;
    } // end of outer for loop


}