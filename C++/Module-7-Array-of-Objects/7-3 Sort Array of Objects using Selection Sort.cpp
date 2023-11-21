
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

    
    //  sorted object
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          if(a[i].marks<a[j].marks){
              swap(a[i],a[j]);
          }
        else if(a[i].marks==a[j].marks){
            if(a[i].roll>a[j].roll){
                swap(a[i],a[j]);
            }
        }
      }
    }
    
    // print object
    for( int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
  return 0;
}