#include<iostream>
using namespace std ;

int main () {   
    int arr[6]={1,2,3,4,5,6};
    int start = 0 ;
    int end   = 0 ;
   
//main code 
  for (int i = 0; i < 5; i+=2)
  {
    if (i+1<5)
    {
      swap(arr[i],arr[i+1]);

    }
    
  }
  
   //print arrayy
    for (int i = 0; i < 6 ; i++)
    {
       cout << arr[i] << " " ;
    };
    
    

}