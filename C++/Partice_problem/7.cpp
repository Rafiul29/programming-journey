#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int id;
    string name;
    int marks;
    Student(){}
    Student(int id,string name,int marks){
        this->id=id;
        this->name=name;
        this->marks=marks;
    }
    
    
    void setValue(int id,string name,int marks){
        this->id=id;
        this->name=name;
        this->marks=marks;
    }
};

int main(){
    
    int n;
    cin>>n;
    
    // Student* a[n];
    Student a[n];
    
    for(int i=0;i<n;i++){
        int id;
        string name;
        int marks;
        // cin>>a[i].id>>a[i].name>>a[i].marks;
        cin>>id>>name>>marks;
        a[i].setValue(id,name,marks);
    }
    
    for(Student x:a){
        cout<<x.id<<" "<<x.name<<" "<<x.marks;
    }
    
    return 0;
}