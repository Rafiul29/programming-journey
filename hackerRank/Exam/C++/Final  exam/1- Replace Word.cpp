// Problem Statement

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

//     First line will contain T, the number of test cases.
//     Next T lines will contain a line with S and X.

// Constraints

//     1 <= T <= 1000
//     1 <= |S|, |X| <= 1000
//     |X| <= |S|

// Output Format

//     For each test cases output the modified string S.

// Sample Input 0

// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

// Sample Output 0

// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer




#include <bits/stdc++.h>
using namespace std;

int main() {
   
  int t;
  cin>>t;
  while(t--){
    string str1,str2;
    cin>>str1>>str2;
    while(str1.find(str2)!=-1){
        str1.replace(str1.find(str2),str2.size(),"#");
    }
    cout<<str1<<endl;
  }
  return 0;
}
