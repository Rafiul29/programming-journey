#include <bits/stdc++.h>
using namespace std;

int *func() {
  int *a = new int;
  cout<< "fun "<< a <<endl;
  *a = 100;
  return a;
}

int main() {

  // int x;
  
  // int *p =new int;
  // *p = 10;
  // cout << *p << endl;

  // float *f = new float;
  // *f = 3.14;
  // cout<<*f;

  int *p = func();
  cout<< "main "<< p<<endl;
  cout << *p;

  return 0;

  return 0;
}