// Constructor

// Name
// Details
// Time Complexity
// list<type>myList;
// Construct a list with 0 elements.
// O(1)
// list<type>myList(N);
// Construct a list with N elements and the value will be garbage.
// O(N)
// list<type>myList(N,V);
// Construct a list with N elements and the value will be V.
// O(N)
// list<type>myList(list2);
// Construct a list by copying another list list2.
// O(N)
// list<type>myList(A,A+N);
// Construct a list by copying all elements from an array A of size N.
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> myList;
    // list<int> myList(10);
    // list<int> myList(10,5);
    // list <int> list1={1,2,3,4,5,6};
    // list <int> myList(list1);
    
    // arr
    // int a[5]={10,20,30,40,50};
    // vector
    vector <int> v={1,2,3,4,55,5};
    list<int> myList(v.begin(),v.end());
    for(auto it=myList.begin();it!=myList.end();it++){
        cout<<*it<<endl;
    }
    // cout<<myList.front();
    
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}