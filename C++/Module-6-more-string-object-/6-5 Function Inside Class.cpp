#include <bits/stdc++.h>
using namespace std;

class Person{
  public:
  string name;
  int age;
Person(string name,int age){
  this->name=name;
  this->age=age;
}
void display(){
  cout<<this->name<<" "<<this->age;
}
};

int main() {

Person rafi("Md rafiul Islam",32);
rafi.display();
// cout<<rafi.name<<" "<<rafi.age;
  return 0;
}