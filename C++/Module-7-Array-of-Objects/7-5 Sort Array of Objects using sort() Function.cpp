
#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    string name;
    int roll;
    int marks;
};


bool cmp(Students a,Students b){
        if(a.marks<=b.marks){
             return true;
        }else{
             return false;   
        }
        
        // or
        // return a.marks<=b.marks;
}
    

int main()
{
    int n;
    cin>>n;
    //static array 
    // Students a[n];
    
    // dynamic array
    Students* a=new Students[n];
   
    for(int i=0;i<n;i++){
    
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }

    
   //sort array
    sort(a,a+n,cmp);
    // print object
    for( int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
  return 0;
}






#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    string name;
    int roll;
    int marks;
};


bool cmp(Students a,Students b){
    //    if(a.marks>b.marks){
    //        return true;
    //    }
    //    else if(a.marks<b.marks){
    //        return false;
    //    }else{
    //        if(a.roll<b.roll){
    //            return true;
    //        }else{
    //            return false;
    //        }
    //     //    return a.roll<b.roll
    //    }    
       
    //  sort cout
    if(a.marks==b.marks){
        return a.roll<b.roll;
    }else{
        return a.marks>b.marks;
    }
    
}
    

int main()
{
    int n;
    cin>>n;
    //static array 
    // Students a[n];
    
    // dynamic array
    Students* a=new Students[n];
   
    for(int i=0;i<n;i++){
    
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }

   //sort array
    sort(a,a+n,cmp);
    // print object
    for( int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
  return 0;
}

// input
// 5
// rafiul 1 90
// pavel 6 96
// asfia 3 95
// badhon 5 95
// sohel 3 96