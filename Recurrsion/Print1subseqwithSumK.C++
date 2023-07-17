#include<iostream>
#include<bits/stdc++.h>

//print 1 -> only remeber two changes 
//1)
// in base case, if condition satisfies then return true otherwise return false 
// 2) 
// then when u do recurrsive callss
// add if condition and check if its true or not , if return true 
// same with second recurrsive call

// and at the end do,return false

// function type should be boolean









using namespace std;


bool funct(int index , vector<int> ds,int s ,int sum,int arr[],int n){
    // base case 
  
    if(index == n){

        //condition satisfied
        if(s == sum){
            for(auto it : ds){
                cout << it << " ";
             //  cout<<endl;
            }
            return true;
        }else return false; // conition not satisfies
        
      
       
    }

    // hypotheis 
    ds.push_back(arr[index]);
    s+=arr[index];
    if(funct(index+1,ds,s,sum,arr,n)==true){
        return true;
    } // take 

   
     //s-=arr[index];
     ds.pop_back(); 
     s-=arr[index];
    if(funct(index+1,ds,s,sum,arr,n)==true){
        return true;
    }  // not take 
 return false;

}
;
int main (){

  int arr[] = {1,2,1};
  int n = sizeof(arr)/sizeof(int);
  vector<int>ds;
  int sum = 2;


  funct(0,ds,0,sum,arr,n);
}