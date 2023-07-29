#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

char maxOccChar (string s){
    int arr[26]={0};

    // ieratting through arrays
    for (int i = 0 ; i< s.length();i++){
        int number = 0 ;
        int ch = s[i];
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1 ; 
    int ans = 0 ;
    for(int j = 0 ;j< 26 ; j++ ){
        if(maxi < arr[j]){
            maxi=arr[j];
            ans = j ;// index of that character 
        }
    }

    return 'a'+ans;
}














int main(){
    // get input as sentence


    // string str ;
    // getline(cin,str);
    // cout << str ;


//     //apend two strings
//     string s1 = "fam";
//     string s2 = "ily";
//     s1.append(s2);
//     cout << s1 << endl;//or
//     cout << s1+s2 << endl;


//     // accessing string elem 
//     string s5 = "pratham";
//     cout << s5[2] << endl;

//     //comparing two strings

//     string s6 = "abc";
//     string s7 = "abp";

//     if(s6.compare(s7)==0){
//         cout << "they are equal" << endl;
      
//     } else{
//         cout << "they are not equal" << endl;

//     }


//     // check if string is empty or not
//     string s8 = "iaiapiapaac iccccccccccccmd je";
//     //s8.clear();
//     if(!s8.empty()){
//         cout << "string is not empty " << endl;
//     }


//     //erase function
//             //starting index   how many char to delete
//   //  s.erase(2               ,  4);

//   string s9 = "udbhav";
//   s9.erase(2,4);
//   cout << s9 << endl;



//   // find string

//   string s11 = "chavanprathamraj";
//   string s12 = "pratham";
//   cout<< s11.find(s12)<<endl; // returns starting index value 


//   // insert function

//   string s13 = "computerscience";
//   // ( index , "string");
//   s13.insert(3,"chu");
//   cout << s13 << endl;

//   // size or lrngth 

//   string s15 = "pratham";
//   cout << s15.size();


//   // substring 
//   string s91 = "ssvansh";
//   string s = s91.substr(1,4); // strting index n how many char
//   cout << s << endl;

//   // string to int
//   string s89= "78";
//   cout << stoi(s89) + 2 << endl;


//   // to string 

//   int a = 89;
//   cout << to_string(a).append(s89)<< endl;

//   // sort a string 
//   string s92 ="pndkrosmwlfrnricay";
//   sort(s92.begin(),s92.end());
//   cout << s92 << endl ;
  string s = "outputu";
  cout << maxOccChar(s) << endl;

}