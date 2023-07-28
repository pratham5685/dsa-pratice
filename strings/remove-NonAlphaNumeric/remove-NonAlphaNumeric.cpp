#include<bits/stdc++.h>

using namespace std;
string solve(string s, int n) {
  string ans;
  for(int i = 0 ; i < n ; i++){
    if(s[i]>='a' && s[i]<='z'){
         ans.push_back(s[i]);
    }
  }
   cout << ans << endl;
}
int main() {

  // Input string
  string str = "take12% *&u ^$#forward";
  
  int n = str.length();

  cout << "Resultant string:" << "\n";
  cout << solve(str, n) << "\n";
  return 0;
}