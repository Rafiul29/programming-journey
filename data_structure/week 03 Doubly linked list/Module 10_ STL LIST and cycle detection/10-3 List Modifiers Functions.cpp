// Modifiers

// Name
// Details
// Time Complexity
// myList= or myList.assign(list2.begin(),list2.end())
// Assign another list.
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30};
    list<int> newList;
    // newList=myList;
    newList.assign(myList.begin(),myList.end());
    for(int val:newList){
        cout<<val<<endl;
    }

    
    return 0;
}

// myList.push_back()
// Add an element to the tail.
// O(1)
// myList.push_front()
// Add an element to the head.
// O(1)
// myList.pop_back()
// Delete the tail.
// O(1)
// myList.pop_front()
// Delete the head.
// O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30};
   
//    myList.push_back(100);
//    myList.push_front(20);
//   myList.pop_back();
    myList.pop_front();
    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}
// myList.insert()
// Insert elements at a specific position.
// O(N+K); where K is the number of elements to be inserted.
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30};
    
    // myList.insert(next(myList.begin(),2),100);
      myList.insert(next(myList.begin(),2),{100,200,300,400});
        list<int> myList={10,20,30};
    list<int> newList={100,200,300};
    //  myList.insert(next(myList.begin(),2),{100,200,300,400});
    myList.insert(next(myList.begin(),2),newList.begin(),newList.end());
    for(int val:myList){
        cout<<val<<endl;
    }
    
    
    return 0;
}

// myList.erase()
// Delete elements from a specific position.
// O(N+K); where K is the number of elements to be deleted.
#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30};
    
    myList.erase(next(myList.begin(),2));
     
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}

// replace(myList.begin(),myList.end(),value,replace_value)
// Replace all the value with replace_value. Not under a list STL.
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
  replace(myList.begin(),myList.end(),20,400);
    for(int val:myList){
        cout<<val<<endl;
    }
    
    return 0;
}
// find(myList.begin(),myList.end(),V)
// Find the value V. Not under a list STL.
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList={10,20,30,20};
 auto it= find(myList.begin(),myList.end(),20);
 
if(it==myList.end()){
    cout<<"Not found";
}else{
    cout<<"Found";
}
    // for(int val:myList){
    //     cout<<val<<endl;
    // }
    
    return 0;
}