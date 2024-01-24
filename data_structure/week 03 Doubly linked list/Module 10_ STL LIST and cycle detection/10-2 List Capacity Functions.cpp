// Capacity
	
// Name
// Details
// Time Complexity
// myList.size()
// Returns the size of the list.
// O(1)
// myList.max_size()
// Returns the maximum size that the vector can hold.
// O(1)
// myList.clear()
// Clears the list elements. Do not delete the memory, only clear the list.
// O(N)
// myList.empty()
// Return true/false if the list is empty or not.
// O(1)


// myList.resize()
// Change the size of the list.
// O(K); where K is the difference between new size and current size.

#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30};
//   cout<<myList.max_size();
    // myList.clear();
    myList.resize(2);
    // myList.resize(7);
    myList.resize(7,100);
    for(int val:myList){
        cout<<val<<endl;
    }

    
    return 0;
}