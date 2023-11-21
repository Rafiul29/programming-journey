// Length is at least 1 and at most 3

#include <bits/stdc++.h>
using namespace std;
bool is_valid(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != '1' && s[i] != '0')
      return false; /// except 0,1 the string is not
  }
  return true;
}

int main()
{

  cout << "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;
  int length = s.size();
  if (is_valid(s) == true && length >= 1 && length <= 3)
  {
    cout << s << " is accepted by the language." << endl;
    cout << "The RE is: (0|1)|(0|1)(0|1)|(0|1)(0|1)(0|1)" << endl;
  }
  else
    cout << s << " is not accepted by the language." << endl;
  return 0;
}