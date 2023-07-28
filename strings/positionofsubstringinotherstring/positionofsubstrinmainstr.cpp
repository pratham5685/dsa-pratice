#include<iostream>
#include<string>

using namespace std;




int main() {
  string text = "takeuforward";
  string pattern = "forward";
  int m = text.length();
  int n = pattern.length();
  int position;


       position = text.find(pattern);
 
  cout<<position<<endl;
  return 0;
}