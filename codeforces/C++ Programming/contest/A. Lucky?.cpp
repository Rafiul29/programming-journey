// Q. Reverse Words

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  getchar();
  while (t--) {
    string str;
    getline(cin, str);
    int leftsum = 0;
    int rightsum = 0;
    for (int i = 0; i < str.size(); i++) {
      if (i <= 2) {
        leftsum += str[i] - 48;
      } else {
        rightsum += str[i] - 48;
      }
    }
    if(leftsum==rightsum){
      cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;
    }
  }
  return 0;
}