#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <string>
#include <utility>
using namespace std;

int main() {
  int a;
  char s[100];
  // without space
  // cin>>s;
  // cout<<s;

  // with space c
  // fgets(s,100,stdin);
  // cout<<s;

  // with space in c++
  cin >> a;
  getchar();
  cin.getline(s, 100);
  cout << a;
  cout << s;
  return 0;
}