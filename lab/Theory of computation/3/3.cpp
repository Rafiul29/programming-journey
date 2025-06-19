/*Write a regular expression for binary strings with at least two 0s but not
consecutive 0s. */
#include <bits/stdc++.h>
using namespace std;
int count_zero(string s) {
  int cnt = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == '0') {
      cnt++;
    }
    if (s[i] == '0' && s[i + 1] == '0') {
      cnt = 0;
      return cnt;
    }
  }
  return cnt;
}
bool is_valid(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '1' && s[i] != '0')
      return false; /// except 0,1 the string is not accepted
  }
  return true;
}
int main() {
  cout << "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;
  int no_of_zero = count_zero(s);
  if (is_valid(s) == true && no_of_zero >= 2)
    cout << s << " is accepted by the language." << endl;
  else
    cout << s << " is not accepted by the language." << endl;
  return 0;
}