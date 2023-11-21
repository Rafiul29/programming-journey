#include <bits/stdc++.h>
using namespace std;
int main()
{

cout<< "Please enter your input: ";
  string s;
  getline(cin, s);
  cout << endl;
  int flag = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if(s[i]!='a' and s[i]!='b' and s[i]!='c'){
        flag=1;
    }
  }
   if (flag == 1)
    cout << "The given string is not accepted." << endl; // char except {a, b, c} will not accepted 
  else{
    string tmp = s;
    sort(tmp.begin(), tmp.end());
    if (s == tmp)
      cout << "The given string is accepted." << endl;
    else
      cout << "The given string is not accepted." << endl;
  }
  return 0;
}