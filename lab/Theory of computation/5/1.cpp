
// starts and ends with a
#include <bits/stdc++.h>
using namespace std;
bool is_valid(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c')
      return false; /// except a,b,c the string is not accepted
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
  if (is_valid(s) == true && s[0] == 'a' && s[length - 1] == 'a')
  {
    cout << s << " is accepted by the language." << endl;
    cout << "The RE is: a(a|b|c)*a" << endl;
  }
  else
  {
    cout << s << " is not accepted by the language." << endl;
  }
  return 0;
}