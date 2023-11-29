
// // Modifiers

// Name
// Details
// Time Complexity
// v= or v.assign()
// Assign another vector.
// O(N) if sizes are different, O(1) otherwise.
#include <bits/stdc++.h>
using namespace std;

int main()
{

  // vector <int> v; type
  vector<int> v = {10, 20, 30};
  vector<int> v1 = {1, 2, 3, 4, 5, 6};
  v = v1;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}

// v.push_back()
// Add an element to the end.
// O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // vector <int> v; type
  vector<int> v = {10, 20, 30};
  v.push_back(50);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}

// v.pop_back()
// Remove the last element.
// O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // vector <int> v; type
  vector<int> v = {10, 20, 30};
  v.pop_back();
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}

// v.insert()
// Insert elements at a specific position.
// O(N+K); where K is the number of elements to be inserted.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector <int> v; type
    vector <int> v={10,20,30};
    // pointer ar address into v.begin()
    v.insert(v.begin()+1,100);
    for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector <int> v; type
    vector <int> v={10,20,30};
    vector <int> v2={40,50};
    // pointer ar address into v.begin()
    // v.insert(v.begin()+1,100);
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
    }
    return 0;
}



// v.erase()
// Delete elements from a specific position.
// O(N+K); where K is the number of elements to be deleted.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //vector <int> v; type
    vector <int> v={10,20,30,3,1,3,2,12,23};
    //    single value delete
    // v.erase(v.begin()+1);
    // multiple value delete first pointer and last pointer
    v.erase(v.begin()+1,v.end()-1);
    for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
    }

    return 0;
}



// replace(v.begin(),v.end(),value,replace_value)
// Replace all the value with replace_value. Not under a vector.
// O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //vector <int> v; type
    vector <int> v={10,20,30,3,1,3,2,12,23};
  replace(v.begin(),v.end(),3,40);
    for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
    }

    return 0;
}


// find(v.begin(),v.end(),V)
// Find the value V. Not under a vector.
// O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector <int> v={1,2,3,4,5,6,3,20};
//    vector <int>::iterator it;

   
   for(auto it=v.begin();it<v.end();it++){
       cout<<*it<<" ";
   }
    return 0;
}
