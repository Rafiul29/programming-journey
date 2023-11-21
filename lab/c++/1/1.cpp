#include <bits/stdc++.h>
using namespace std;

bool function_for_1st_case(string s) {
  if (s.size() == 1)
    /// 1 or 0 will be accepted
    return true;
  if (s.size() == 2) {
    if (s[0] == s[1])
      return true;
    else
      return false;
    /// 11 or 00 will be accepted
  } else if (s.size() == 3) {
    if (s[0] == s[2] && s[0] != s[1])
      return true;
    else
      return false;
  }
}

bool is_valid(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '1' && s[i] != '0')
      return false;
  }
  return true;
}

int main() {

  cout << "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;

  bool a = function_for_1st_case(s);
  
  if (is_valid(s) == false || s.size() == 0)

    cout << "The given string is not accepted." << endl;
  else {
    if (a == true)
      cout << "For RE a or bb or bab, given string is accepted." << endl;
    else
      cout << "The given string is not accepted." << endl;
  }
  return 0;
}