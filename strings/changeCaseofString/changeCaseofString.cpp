#include<iostream>
#include<string>

using namespace std;



int main() {
  // Input string
  string s = "take u forward IS Awesome";
  int n = s.length();
 
  for (int i = 0 ; i < s.length()-1 ; i++){
   // int ascii = (int) s[i];
    char ch = s[i];
    //3 cases 
    //1 
    if(ch>='a' && ch<='z'){
        
        s[i] = toupper(s[i]); // to upper case 
    }
    else if (ch>='A' && ch<='Z'){
       
        s[i] = tolower(s[i]); // to lower 
    }
    else {
        continue;
    }


}
  cout << s << endl;

  char ch1 = 'A';
  ch1 = ch1 - 'A' + 'a';
  cout<<ch1;
return 0;
}