
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool function_for_4th_case(string s)
{
  int length = s.size();
  if (s[0] == s[length - 1])
  {
    /// 10001, 011110, 101,010 , first last same will be accepted
    return true;
  }
  else
    return false;
}

bool is_valid(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != '1' && s[i] != '0')
      return false;
    /// except 0,1 the string is not accepted,
  }
  return true;
}

int main()
{
  cout << "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;
  
  bool d = function_for_4th_case(s);

  if (is_valid(s) == false || s.size() == 0)
    cout << "The given string is not accepted." << endl;
  // NULL string will not accepted
  else
  {
    if (d == true)
      cout << "For RE a(a|b)*a|a, given string isaccepted." << endl;
    else
      cout << "The given string is not accepted." << endl;
  }
  return 0;
}