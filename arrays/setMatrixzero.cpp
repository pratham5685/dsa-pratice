#include<iostream>
using namespace std;
void markRow (int i , int arr[] , int n , int m){
    // for that particular row clear baki ke colns ka value
    int h;
    for( h = 0 ; h < 3 ; h++){
       if(arr[i][h] != 0 ){
           arr[i][h] = -1;
       }
    }
}

int main(){
    int arr[3][3] ={{1,3,1},{1,0,2},{1,1,1}};


      for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3 ; j++){
  
            if(arr[i][j]==0){
                markRow(i,arr, 3, 3);
                markCol(j);
            }

         }
      }
}