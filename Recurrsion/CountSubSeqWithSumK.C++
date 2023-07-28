#include<iostream>
#include<bits/stdc++.h>




using namespace std;


int funct(int index,int s ,int sum,int arr[],int n){
    // base case 
  
    if(index == n){

        //condition satisfied
        if(s == sum){
            return 1;
        }else return 0; // conition not satisfies
        
      
       
    }

    // hypotheis 
 
    s+=arr[index];
    int l =funct(index+1,s,sum,arr,n); // take 

   
     //s-=arr[index];
    
    s-=arr[index];
    int r = funct(index+1,s,sum,arr,n);
     
     // not take 







  return l+r;

}
;
int main (){

  int arr[] = {1,2,1};
  int n = sizeof(arr)/sizeof(int);
  vector<int>ds;
  int sum;

  cout << "Enter sum : ";
  cin>>sum;



  cout << "Count of subseq with sum k is : " << funct(0,0,sum,arr,n) << endl;
}