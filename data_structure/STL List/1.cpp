#include <bits/stdc++.h>
using namespace std;
int main()
{

  list<int> v = {1, 2, 3, 4, 5, 6};

  v.resize(100, 10);
  v.push_back(20);
  v.push_front(5);
  v.insert(next(v.begin(),2),10);
  replace(v.begin(),v.end(),10,200);

  auto it =find(v.begin(),v.end(),1);
  if(it!=v.end()){
    cout<<*it<<"found"<<endl;
  }else{

  }
  v.sort(greater<int>());
  v.unique();
  v.reverse();
  for (int val : v)
  {
    cout << val << " ";
  }
  cout << "size " << v.size();
  cout << endl;

  return 0;
}