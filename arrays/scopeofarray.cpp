#include<iostream>

using namespace std;

void update (int arr[] , int n ) {
    arr[0]= 120 ;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }

}

int main() {
    int arr[3]={1,2,3};

    //update arr
    update(arr,3);

    // printing arr
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
    
}