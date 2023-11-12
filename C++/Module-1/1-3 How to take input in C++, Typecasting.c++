#include <iostream>
using namespace std;
int main() {
  // int a;
  // long long int b;
  // char c;
  // cin >> a >> b >> c;
  // int ascii = c;
  // cout << a << endl << b << endl << c << endl << ascii;
  int a;
  char c;
  cin>>a>>c;
  // type casting
  long long int b=(long long int)(a);
  cout<<b<<endl<<int(c);
  return 0;
}