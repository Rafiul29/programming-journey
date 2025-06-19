#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    getchar();
    string str;
   getline(cin,str);
    int b = 0;
    int p[26] = {0};
    for (int i = 0; i < str.size(); i++) {
      if (p[str[i]-65] == 1) {
        b += 1;
      } else {
        b += 2;
       p[str[i]-65] = 1;
      }
    }
    cout << b << endl;
  }

  return 0;
}