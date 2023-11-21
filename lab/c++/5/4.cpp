// An even number of a'

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

  int last_position = s.size();
  int no_of_a = 0;

  for (int i = 0; i < last_position; i++)
  {
    if (s[i] == 'a')
      no_of_a++;
  }

  if (is_valid(s) == true && no_of_a % 2 == 0)
  {
    cout << s << " is accepted by the language." << endl;
  }
  else
  {
    cout << s << " is not accepted by the language." << endl;
  }
  return 0;
}