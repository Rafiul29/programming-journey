// vector<type>v;
//  Construct a vector with 0 elements.
//  O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //    vector <int> v; type
  vector<int> v;
  cout << v.size() << endl;
  return 0;
}

// vector<type>v(N);
// Construct a vector with N elements and the value will be garbage.
// O(N)

#include <bits/stdc++.h>
using namespace std;

// selection sort
int main()
{
  //    vector <int> v; type
  vector<int> v(5);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << v.size() << endl;
  return 0;
}

// vector<type>v(N,V);
// Construct a vector with N elements and the value will be V.
// O(N)
#include <bits/stdc++.h>
using namespace std;

// selection sort
int main()
{
  vector<int> v(5, 0);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  cout << v.size() << endl;
  return 0;
}

// vector<type>v(v2);
// Construct a vector by copying another vector v2.
// O(N)
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //    vector <int> v; type

  vector<int> v2(5, 10);
  vector<int> v(v2);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;
  cout << v.size() << endl;
  return 0;
}

// vector<type>v(A,A+N);
// Construct a vector by copying all elements from an array A of size N.
// O(N)
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //    vector <int> v; type
  int a[5] = {1, 2, 3, 4, 5};
  vector<int> v(a, a + 5);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;
  cout << v.size() << endl;
  return 0;
}


// 
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector <int> v; type
  vector<int> v={1,2,3};
  for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<v.size()<<endl;
    return 0;
}

