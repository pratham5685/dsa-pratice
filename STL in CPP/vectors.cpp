#include<iostream>
#include<vector> // including STL for vectors


using namespace std ;

int main () {

    // capacity : total size of and an array it gets doubles when u start adding elements 


    // size : actual elements in an vector

    vector <int> v ;
    cout << "Size -> " << v.capacity()<<endl;

    v.push_back(4);
        cout << "Size -> " << v.capacity()<<endl;

    v.push_back(7);
        cout << "Size -> " << v.capacity()<<endl;

    cout << "Size -> " << v.size()<<endl;
    v.push_back(89);
        cout << "Size -> " << v.size()<<endl;

    cout<<"1st elem -> " << v.front() << endl;
    cout<<"1st elem -> " << v.back() << endl;

    v.pop_back();
    v.clear();
     // clear vector size zero hoti hai not capacity 


    // initialize vector with elem

    vector <int> a(5,1);
    // 5 elements with all values 1 
    for (int i:a){
        cout<<i<<" ";
    };

}