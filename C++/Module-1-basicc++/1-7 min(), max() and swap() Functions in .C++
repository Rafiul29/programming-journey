// min(), max()

#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  // input size less than 2
  // int ma = max(a, b);
  // int mi=min(a,b);
  // cout << ma<<endl;
  // cout << mi;

  // input size grether than 2

  int ma = max({a, b, c, d});
  int mi = min({a, b, c, d});
  cout << "Max " << ma << endl << "Min " << mi;
  return 0;
}

// swap()
#include <algorithm>>
#include <iomanip>
#include <iostream>
#include <utility>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b;
  return 0;
}



#include <algorithm>>
#include <iomanip>
#include <iostream>
using namespace std;
void swap1(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main() {

  int a, b;
  cin >> a >> b;
  swap1(&a,&b);
  cout<<a<<b;
  return 0;
}
