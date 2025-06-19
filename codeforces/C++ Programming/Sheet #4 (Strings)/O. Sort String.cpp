// Error 
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {

  int n;
  cin >> n;
  char arr[n];
 cin>>arr;
  sort(arr, arr+n);

  cout << arr;

  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {

  int n;
  cin >> n;
  if(n<1) return 0;
  int arr[26] = {0};
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    arr[c - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (arr[i] != 0) {
     for(int j=0;j<arr[i];j++){
          cout<< char('a'+i);
     }
    }
  }

  return 0;
}