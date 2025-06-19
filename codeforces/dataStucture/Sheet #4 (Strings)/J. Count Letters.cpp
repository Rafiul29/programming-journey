#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> freq(26, 0);
  string str;
  cin >> str;

  for (int i = 0; i < str.size(); i++)
  {
    freq[str[i] - 'a']++;
  }

  for (int i = 0; i < freq.size(); i++)
  {
    if (freq[i] != 0)
    {
      cout << char(i + 97) << " "
           << ":"
           << " " << freq[i] << endl;
    }
  }
  return 0;
}