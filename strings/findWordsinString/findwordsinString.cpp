#include<iostream>
#include<string>


using namespace std;

int main (){
     string str = "HI AMY AND JAY";
     int spaces = 0;
     for(int i = 0 ; i < str.length()-1;i++){
        if(str[i]==' '){
          spaces = spaces + 1;
        }
     }
     int ans = spaces + 1;
    cout << ans << endl;
}