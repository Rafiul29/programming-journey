// 3-7 Create Dynamic Object in C++ using function

#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    int roll;
    int cls;
    double cgpa;

// this and arrow sign
// constructor
    Students(int roll,int cls,double cgpa){

    // arrow sign
    this->roll=roll;
    this->cls=cls;
    this->cgpa=cgpa;

    }
};

Students* fun(){
  // dynamic object
   Students *rafiul=new Students(101,2,3.5);
  //  here rafiul pointer
  return rafiul;
}

int main() {

Students* ans=fun();

cout<<ans->roll<<" "<<ans->cls<<" "<<ans->cgpa<<endl;
// delete memory
  delete ans;
    return 0;
}




// 
#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    int roll;
    int cls;
    double cgpa;

// this and arrow sign
// constructor
    Students(int roll,int cls,double cgpa){

    // arrow sign
    this->roll=roll;
    this->cls=cls;
    this->cgpa=cgpa;

    }
};

int main() {

Students *rafiul= new Students(1,2,32.3);
  cout<<rafiul->cgpa;
  delete rafiul;
    return 0;
}