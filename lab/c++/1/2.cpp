#include <bits/stdc++.h>
using namespace std;

bool function_for_2nd_case(string s) {
  /// 000....00 or 111....11 will be accepted.
  int length = s.size();
  char c = s[0];
  for (int i = 0; i < length; i++) {
    if (s[i] != c) {
      return false; /// 0001.. or 1110.., not accepted
    }
  }
  return true;
}

bool is_valid(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '1' && s[i] != '0')
      return false; /// except 0,1 the string is not accepted,
  }
  return true;
}

int main() {

  cout << "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;
  bool b = function_for_2nd_case(s);
  if (is_valid(s) == false)
    cout << "The given string is not accepted." << endl;
  else {
    if (b == true)
      cout << "For RE a*, given string is accepted." << endl;
    else
      cout << "The given string is not accepted." << endl;
  }
}