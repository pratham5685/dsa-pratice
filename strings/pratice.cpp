#include<iostream>

using namespace std;

int main (){
    

    char count ='A';
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j < i ; j++){
            cout<<count<<" ";
            count = count + 1;

        }
        cout<<endl;
    }
}