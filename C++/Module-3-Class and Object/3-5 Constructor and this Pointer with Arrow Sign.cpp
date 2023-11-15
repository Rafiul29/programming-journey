// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Students{
    
    public:
    int roll;
    int cls;
    double cgpa;
    
    // constructor
    // Students(int r,int c,double g){
    //     roll=r;
    //     cls=c;
    //     cgpa=g;
    // }

// this and arrow sign
// constructor
    Students(int roll,int cls,double cgpa){
        
        // (*this)- derefernce
    //   (*this).roll=roll;
    //   (*this).cls=cls;
    //   (*this).cgpa=cgpa;
    
    // arrow sign
    this->roll=roll;
    this->cls=cls;
    this->cgpa=cgpa;
       
    }
};


int main() {

  Students rafiul(12,2,3.45);
  cout<<rafiul.roll<<" "<<rafiul.cls<<" "<<rafiul.cgpa<<endl;
  

    return 0;
}