#include<iostream>
using namespace std ;

// max value function

int getMax(int arr[], int n ) {
    int max = INT32_MIN ;
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] > max ){
            max = arr[i];
        }
    }
     return max;

}

// max value function

int getMin(int arr[], int n ) {
    int min = INT32_MAX ;
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] < min ){
            min = arr[i];
        }
    }
     return min;

}

int main(){
    int size;
    cin>>size;

// declare a array 
int num[100];

// taking ip for elementss
    for (int i = 0; i < size ; i++){
        cin>>num[i];
    }
    
int maxValue = getMax(num,size);
int minValue = getMin(num,size);
 
cout<<"Max value in arr is : "<< maxValue << endl;
cout<<"Min value in arr is : "<< minValue << endl;

}