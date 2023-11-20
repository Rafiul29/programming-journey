#include <bits/stdc++.h>
using namespace std;

int main() {

string str;
getline(cin,str);

stringstream s(str);

string word;

int cnt=0;
while(s>>word){
    cout<<word<<endl;
    cnt++;
}
cout<<cnt;

 
  return 0;
}




// numberOf word and wordlenth 
#include <bits/stdc++.h>
using namespace std;

int main() {

string str;
getline(cin,str);
stringstream s(str);

string word;

int wordnumber=0;
while(s>>word){
  wordnumber++;
  int wordlength=0;
  for(int i=0;i<word.size();i++){
    wordlength++;
  }
    cout<<word<<"-"<<wordlength<<endl;
    wordlength=0;
}
 cout<<wordnumber<<endl;
  return 0;
}