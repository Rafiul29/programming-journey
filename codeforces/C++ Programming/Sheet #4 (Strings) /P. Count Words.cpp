#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
  string str;
  getline(cin, str);
  bool inside_word = false;
  int cnt = 0;
  for (char c : str)
  {
    if (isalpha(c))
    {
      if (inside_word == false)
      {
        cnt++;
      }
      inside_word = true;
    }
    else
    {
      inside_word = false;
    }
  }
  cout << cnt << endl;
  return 0;
}

// error
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
  string str;
  getline(cin, str);
  if (str.size() < 0)
    return 0;
  stringstream s(str);
  string word;
  int cntW = 0;
  while (s >> word)
  {
    if (word[0] != 46 && word[0] != 33 && word[0] != 63 && word[0] != ',')
    {

      cntW++;
    }
  }
  cout << cntW << endl;
}