#include<iostream>

using namespace std ;

void length(char arr[]){
    int count = 0 ;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        count = count + 1 ;
    }
    cout << count << endl;
}




int main(){
    char name[20];
    cout << "enter ur name : " << endl;
    cin >> name;
    cout << "ur name is : " << name << endl;

    // length 
    length(name);
    
}