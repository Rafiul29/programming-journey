//3-3 How to Create Class and Object in C++ and Snippet Settings

#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    char name[100];
    int roll;
    double cgpa;
};


int main() {

  Students a,b;

//   a.roll=1;
//   a.cgpa=3.45;
//direct value assign in array not possible but input value assign possible 
//   char temp[100]="rafiul";
//   strcpy(a.name,temp);

// whithout space name 
// cin>>a.name>>a.roll>>a.cgpa;
// cin>>b.name>>b.roll>>b.cgpa;
//   cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
//   cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;

cin.getline(a.name,100);
cin>>a.roll>>a.cgpa;
getchar();
cin.getline(b.name,100);
cin>>b.roll>>b.cgpa;
  cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
  cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}