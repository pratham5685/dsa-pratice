#include<iostream>

using namespace std;
void printArr(int arr[] , int size ){
    int count = 0 ;
    for (int i = 0; i < size ; i++)
    {
        cout<< arr[i]<<" ";
        count = count + 1;
    }
    cout << count << endl;
}
int main() {

    int arr[15];
 //   cout << arr[14];

// int third[15] ={2,7};
// for (int i = 0; i < 14; i++) {
//     cout<<third[i]<<" ";
// }


// initializing entire arr with specific value

// int fourth[10];
// for (int i = 0 ; i < 10 ; i++) {
//     fourth[i]=10;
// }

// for (int j = 0; j < 10 ; j++ ){
//     cout << fourth[j] << " "  ;
// }

// printArr(fourth,10);

// finding size of an array;
int fifth[12]= {1,2,35,3};
int fifthSize = sizeof(fifth)/sizeof(int);
cout<<fifthSize<<endl;

printArr(fifth,4);


}