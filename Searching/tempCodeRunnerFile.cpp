#include<iostream>

using namespace std;

int findPeakElem(int arr[], int n ){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int m;
        m = s + (e-s)/2;

        if(s>0 && e<n-1){
            if (arr[m] > arr[m+1] && arr[m] > arr[m-1]){
                return m;
            };
        };
 
        if(arr[m-1]>arr[m]){
            e = m-1;
        }

        if(arr[m+1]>arr[m]){
            s = m + 1;
        }

        if(m==0){
          
             if(arr[0]>arr[1]){
                return m ;
             }else{
                return 1;
             }

        if(m=n-1){
             if (arr[n-1]>arr[n-2]) {
                return n-1;
             }else{
                return n-2;
             }
             
        }
        }

    }

};

int main(){

int arr[] = {5,10,20,15};
int n = sizeof(arr)/sizeof(int);

int result = findPeakElem(arr,n);
cout<<"index of peak element is : " << result<< endl;

}