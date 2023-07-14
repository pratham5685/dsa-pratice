#include<iostream>

using namespace std ;

void print(){
  
    cout<<"Hello World"<<endl;
    print();
    
}
int count = 0 ; // global variable

void printBaseCond(){
    if(count == 5){
        return; // terminates the function
    } else {
        cout << count << endl;
    count = count + 1 ;
    printBaseCond();

    }


}

int main () {
    //print(); // only recurrsion no base condition
    printBaseCond();  // with base condition , we need a global variable


}