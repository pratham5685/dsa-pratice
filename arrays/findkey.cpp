#include<iostream>
// linear search 
using namespace std ;
bool search (int arr[] , int size , int key ) {

       for (int i = 0; i < size ; i++)   {
         
          if (arr[i]==key) {
            return 1 ;
          }
       }
       
       return 0 ;

}

int main () {
    int arr[5] = {12,34,65,33,78};

    int key ;
    cout<<"Enter key value to search for : " << endl;
    cin >> key ;


    bool found = search(arr,5,key);
    if (found) {
        cout << "Key is present in that array ";

    } else {
        cout << "Key is NOT present in that array ";
    };
    
};