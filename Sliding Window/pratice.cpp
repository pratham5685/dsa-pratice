#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,4,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
     for (int i = 0; i < n ; i++)
    {
        arr[arr[i]%n]= arr[arr[i]%n] + n;
    }

    for (int i = 0; i <n ; i++)
    {
        if(arr[i] >= n * 2){
           cout << i << endl;
        }
    }

    
}

