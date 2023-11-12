// setprecisions
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double a;
  cin >> a;
  cout << fixed << setprecision(6) << a << endl;
  return 0;
}

// EOF C Programming
#include <iostream>
using namespace std;
int main() {

  int a, b;

  while (scanf("%d %d", &a, &b) != EOF) {
    printf("%d %d\n", a, b);
  }

  return 0;
}

// C++ Programming
#include <iostream>
using namespace std;
int main() {

  int a, b;

  while (cin>>a>>b) {
   cout<<a<<" "<<b;
  }

  return 0;
}