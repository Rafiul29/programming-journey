// Problem Statement

// You are given the heights of
// people who are standing in a line. The person wants to know who had the greatest height among the people before and after him. The first person has no one before him, and the last person has no one after him. In that case, you must print

// .

// Input Format

//     First line will contain 

// .
// Second line will contain an array
// which are the heights of person. Here

// Constraints

// Output Format

//     For the 

//     person, the first value denotes the greatest height of people before him, and the second value denotes the greatest height of people after him.

// Sample Input 0

// 10
// 9 1 3 12 7 6 18 9 2 5

// Sample Output 0

// -1 18
// 9 18
// 9 18
// 9 18
// 12 18
// 12 18
// 12 9
// 18 5
// 18 5
// 18 -1


#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int> h(n);
   vector<int> af(n);
   vector<int> bf(n);
   for(int i=0;i<n;i++){
       cin>>h[i];
       af[i]=-1;
       bf[i]=-1;
   }
   
    int x=-1,y=-1;
    for(int i=0;i<n;i++){
        bf[i]=max(bf[i],x);
        x=max(x,h[i]);
    }
    
     for(int i=n-1;i>=0;i--){
        af[i]=max(af[i],y);
        y=max(y,h[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<bf[i]<<" "<<af[i]<<endl;
    }

    return 0;
}
