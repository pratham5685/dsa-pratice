#include<iostream>
using namespace std ;
int main () {
    int arr[5] ={2,7,1,-4,11};

    // printing sum of all elements in arr
    int sum = 0 ;
    for (int i = 0; i < 5 ; i++)
    {
        sum = sum + arr[i];
    }
    
    cout << "sum is : " << sum << endl;
    
}