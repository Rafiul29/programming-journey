#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
getline(cin,s);

//normal for loop
for(int i=0;i<s.size();i++){
  cout<<s[i]<<endl;
}

// rage base for loop
for(char c:s){
  cout<<c<<endl;
}
  return 0;
}