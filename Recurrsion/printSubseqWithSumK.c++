#include<iostream>
#include<bits/stdc++.h>


using namespace std;
void funct(int index , vector<int> ds,int s ,int sum,int arr[],int n){
    // base case 
  
    if(index == n){
        if(s == sum){
            for(auto it : ds){
                cout << it << " ";
                // cout<<endl;
            }
        }
       cout<<endl;
        return;
    }

    // hypotheis 
    ds.push_back(arr[index]);
    s+=arr[index];
    funct(index+1,ds,s,sum,arr,n); // take 

   
     //s-=arr[index];
     ds.pop_back(); 
     s-=arr[index];
    funct(index+1,ds,s,sum,arr,n);  // not take 


}
;
int main (){

  int arr[] = {1,2,1};
  int n = sizeof(arr)/sizeof(int);
  vector<int>ds;
  int sum = 2;


  funct(0,ds,0,sum,arr,n);
}