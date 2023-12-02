// v.size()
// Returns the size of the vector.
// O(1)



#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
vector <int> v;
  cout<<v.size()<<endl;
    return 0;
}


// v.max_size()
// Returns the maximum size that the vector can hold.
// O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
vector <int> v;
  cout<<v.max_size()<<endl;
    return 0;
}




// v.capacity()
// Returns the current available capacity of the vector.
// O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
    vector <int> v;
    cout<<v.capacity()<<endl;
    v.push_back(5);
     cout<<v.capacity()<<endl;
      v.push_back(5);
     cout<<v.capacity()<<endl;
      v.push_back(5);
     cout<<v.capacity()<<endl;
    return 0;
}








// v.clear()
// Clears the vector elements. Do not delete the memory, only clear the value.
// O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
    vector <int> v;
    v.push_back(15);
      v.push_back(25);
      v.push_back(35);
     v.clear();
     cout<<v.size()<<endl;
    //  for(int i=0;i<v.size();i++){
    //      cout<<v[i]<<" ";
    //  }
    cout<<v[2];
    return 0;
}





// v.empty()
// Return true/false if the vector is empty or not.
// O(1)



// v.resize()
// Change the size of the vector.
// O(K); where K is the difference between new size and current size.

#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
    vector <int> v;
    v.push_back(15);
      v.push_back(25);
      v.push_back(35);
     v.resize(2);
     v.resize(7,50);
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }

    return 0;
}
