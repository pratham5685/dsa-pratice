#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// print subsequence 
void func(int index , vector<int>ds , int arr[], int n){
    // base condition
    if(index>=n){
        for(auto it : ds){
            cout << it << " ";
        }
        if(ds.size()==0) cout << "{}";
        cout << endl;
        return;
    }

    ds.push_back(arr[index]);
   
    func(index+1,ds,arr,n); // take condition

    ds.pop_back();
    func(index+1,ds,arr,n); // not take condition









};

int main (){
    int arr[]={3,1,2};
    vector<int> ds;
    int n = sizeof(arr)/sizeof(int);

    func(0,ds,arr,n);

};