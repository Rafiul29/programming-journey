// Name
// Details
// Time Complexity
// myList.remove(V)
// Remove the value V from the list.
// O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
    myList.remove(20);
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}


// myList.sort()
// Sort the list in ascending order.
// O(NlogN)
// myList.sort(greater<type>())
// Sort the list in descending order
// O(NlogN)
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
    
    // ascending
    // myList.sort();
    
    //descending
    myList.sort(greater<int>());
    
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}


// myList.unique()
// Deletes the duplicate values from the list. You must sort the list first.
// O(N), with sort O(NlogN)
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
    
    // ascending
    // myList.sort();
    
    //descending
    myList.sort(greater<int>());
    myList.unique();
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}
// myList.reverse()
// Reverse the list.
// O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
    
    // reverse
    myList.reverse();
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}


// Element access

// Name
// Details
// Time Complexity
// myList.back()
// Access the tail element.
// O(1)

// myList.front()
// Access the head element.
// O(1)

// next(myList.begin(),i)
// Access the ith element
// O(N)


#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
    
  cout<<myList.back()<<endl;
  cout<<myList.front()<<endl;
//   return itarator
  cout<<*next(myList.begin(),2)<<endl;
    // for(int val:myList){
    //     cout<<val<<endl;
    // }
    
    return 0;
}

