// Problem Statement

// Arif, the magician is putting some magic colors in a box serially. But he is not providing any divider between the colors. So, the color may be mix up instantly.

// There are three types of colors-
// , and

// . How they could mix up is given below -

// + = + = + = And there are some other problems. If two same type of colors mix up, they will vanish each other. For example if two

// colors get together, both of them will be vanished.

// Can you help the magician to get the final colors that will be in the box?

// Input Format

//     First line will contain 

// , the number of test cases.
// Next line will contain
// , number of colors in the box.
// Next line will contain
// characters (,,

//     only) , first capital letter of the color.

// Constraints

// Output Format

//     Output the first capital letter of the colors that are saved finally.

// Sample Input 0

// 2
// 3
// RBG
// 4
// RGBB

// Sample Output 0

// PG
// Y

// Sample Input 1

// 5
// 6
// RGGRRG
// 6
// RGRGRG
// 4
// RGGR
// 5
// RGGGR
// 4
// RGGB

// Sample Output 1

// Y
// Y

// YR
// YC

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    stack <char> st, st1;
    int n;
    cin>>n;
    if(n<0){
        return 0;
    }
   vector<char> s;
   for(int i=0;i<n;i++){
       char x;
       cin>>x;
       s.push_back(x);
   }
   
    for(int i=0;i<s.size();i+=2){
        if((s[i]=='R' && s[i+1]=='B')|| s[i]=='B' && s[i+1]=='R'){
            if(!st.empty() && st.top()=='p'){
                st.pop();
            }else{
                st.push('P');
            }
        }else if((s[i]=='R' && s[i+1]=='G')|| (s[i]=='G' && s[i+1]=='R')){
            if(!st.empty() && st.top()=='Y'){
                st.pop();
            }else{
                st.push('Y');
            }
        }else if((s[i]=='G' && s[i+1]=='B') ||(s[i]=='B' && s[i+1]=='G') ){
            if(!st.empty() && st.top()=='C'){
                st.pop();
            }else{
                st.push('C');
            }
        }else{
            if(s[i]!=s[i+1]){
                st.push(s[i]);
            }
        }
    }
   while (!st.empty()) {
       st1.push(st.top());
        st.pop();
    }
     while (!st1.empty()) {
      cout<<st1.top();
        st1.pop();
    }
    cout<<endl;
  }
 
    return 0;
}




// Question - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (!s.empty() && s.top() == c)
                s.pop();
            else if (c == 'R')
            {
                if (!s.empty() && s.top() == 'B')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'P')
                        s.pop();
                    else
                        s.push('P');
                }
                else if (!s.empty() && s.top() == 'G')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'Y')
                        s.pop();
                    else
                        s.push('Y');
                }
                else
                    s.push(c);
            }
            else if (c == 'B')
            {
                if (!s.empty() && s.top() == 'R')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'P')
                        s.pop();
                    else
                        s.push('P');
                }
                else if (!s.empty() && s.top() == 'G')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'C')
                        s.pop();
                    else
                        s.push('C');
                }
                else
                    s.push(c);
            }
            else
            {
                if (!s.empty() && s.top() == 'R')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'Y')
                        s.pop();
                    else
                        s.push('Y');
                }
                else if (!s.empty() && s.top() == 'B')
                {
                    s.pop();
                    if (!s.empty() && s.top() == 'C')
                        s.pop();
                    else
                        s.push('C');
                }
                else
                    s.push(c);
            }
        }
        stack<char> q;
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        while (!q.empty())
        {
            cout << q.top();
            q.pop();
        }
        cout << endl;
    }
    return 0;
}