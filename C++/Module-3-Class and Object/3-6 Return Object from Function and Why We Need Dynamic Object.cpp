// Return Object from Function 
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

Students fun(){
    Students rafiul(29,5,3.99);
    return rafiul;
}

int main() {
    
Students ans=fun();

cout<<ans.roll<<" "<<ans.cls<<" "<<ans.cgpa<<endl;
    return 0;
}



// dynamic object not working next vieo solved
// Online C++ compiler to run C++ program online
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
    Students rafiul(29,5,3.99);
  Students *p=&rafiul;
    return p;
}

int main() {

Students* ans=fun();

cout<<ans->roll<<" "<<ans->cls<<" "<<ans->cgpa<<endl;
    return 0;
}