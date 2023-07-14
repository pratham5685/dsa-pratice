#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5] = {3,11,9,2,4};
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    sort(arr,arr+size);
    for (int i = 0; i < size ; i++)
    {
      cout<<arr[i]<<" ";
    }
    

}

