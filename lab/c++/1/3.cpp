
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool function_for_3rd_case(string s){
    int length=s.size();
    for(int i=0;i<length;i++){
        if(s[i]!='0' && s[i]!='1'){
            return false;
         }
    }
    return true;
}

// bool is_valid(string s){
//     for(int i=0;i<s.size();i++){
//         if(s[i]!='1'&&s[i]!='0')
//         return false;
// /// except 0,1 the string is not accepted,
// }
// return true;
// }

int main() {
   cout<<"Please enter your input: ";
string s;
getline(cin,s);
cout<<endl;
bool c=function_for_3rd_case(s);
if(c==true)
cout<<"For RE (a|b)*, given string "<<s<<" isaccepted."<<endl;
//(a|b)*={e,a,b,aa,ab,ba...}
else
cout<<"The given string is not accepted."<<endl;
return 0;
}