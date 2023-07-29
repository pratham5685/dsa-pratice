#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool ans (int arr1[],int m , int arr2[],int n ){
    if(n<m){
        return false;
    }
    
    for(int i = 0 ; i < m ; i++){
        bool flag = false;

        for(int j = 0 ; j < n ; j++){
            if(arr1[i]==arr2[j]){
                bool flag = true;
                break;
            }
        }

        if(flag == false) return false;
    }
   return true;

}

int main(){

	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);

    bool res = ans(arr1,m,arr2,n);
    cout << res << endl;

    return 0;
}