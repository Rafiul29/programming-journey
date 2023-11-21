
#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin>>n;
    //static array 
    // Students a[n];
    
    // dynamic array
    Students* a=new Students[n];
   
    for(int i=0;i<n;i++){
         getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    
    Students mn,mx;
    mn.marks=INT_MAX;
    mx.marks=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i].marks<mn.marks){
            mn=a[i];
        }
        
        if(a[i].marks>mx.marks){
            mx=a[i];
        }
    }
    
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
  return 0;
}