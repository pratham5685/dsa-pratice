#include<iostream>
#include<array>



using namespace std;

int main () {

    int basic[4]={1,2,3,4}; // normal declaration of array
              //       0 1 2 3
    array <int,4> a = {2,4,6,8} ; // using stl


    // Getting size of an array
    int size = a.size();
    cout << size << endl;

    cout<<"Element at index 2 is : " << a.at(2)<<endl;

    cout<<"Empty or not : " << a.empty() << endl;

    cout << "first Element is : " << a.front() <<endl;

    cout << "first Element is : " << a.back() <<endl;

    


}