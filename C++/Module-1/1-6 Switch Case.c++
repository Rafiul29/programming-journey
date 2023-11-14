#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  switch (a) {
  case 1:
    cout << "One";
    break;
  case 2:
    cout<<"Two";
    break;
  case 3:
    cout<<"Three";
    break;
    default:
    cout<<"Another number";
  }
  
  return 0;
}


// odd or even
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  switch (a % 2) {
  case 0:
    cout << "Even";
    break;
  case 1:
    cout << "Odd";
    break;
  default:
    cout << "Another number";
  }

  return 0;
}

// check vowel or consonant
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  char a;
  cin >> a;
  switch (a) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "Vowel";
    break;
  default:
    cout << "Consonant";
  }

  return 0;
}