#include <bits/stdc++.h>
using namespace std;

class Person{
  public:
  string name;
  int age;
Person(string name,int age){
  // this->name=name;
  // this->age=age;
  
  //or
  (*this).name=name;
  (*this).age=age;
}

};

int main() {

Person* rafi=new Person("Rafiul islam",32);
Person* rakib=new Person("rakibul islam",23);

// copy way -1
// rafi->name=rakib->name;
// rafi->age=rakib->age;
// delete rakib

//copy way 2
*rafi=*rakib;
delete rakib;


cout<<rafi->name<<" "<<rafi->age;
  return 0;
}