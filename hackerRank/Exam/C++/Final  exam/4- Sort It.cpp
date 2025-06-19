// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

// Input Format

//     First line will contain N.
//     Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.

// Constraints

//     1 <= N <= 100
//     1 <= |nm| <= 100 and will contain only English alphabets.
//     1 <= cls <= 10
//     'A' <= s <= 'Z'
//     1 <= id <= 1000
//     0 <= math_marks, eng_marks <= 100

// Output Format

//     Output the students data in descending order according to the total marks.

// Sample Input 0

// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99

// Sample Output 0

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 26 40 50
// Munna 8 D 25 50 30

// Sample Input 1

// 6
// Munna 8 D 30 50 40
// Shojoy 9 E 25 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99
// Khadija 8 E 26 40 50

// Sample Output 1

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 25 40 50
// Khadija 8 E 26 40 50
// Munna 8 D 30 50 40


#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
  string nm;
  int cls;
  string s;
  int id;
  int math_marks;
  int eng_marks;
  
  void setValue(string nm,int cls,string s,int id,int math_marks,int eng_marks){
      this->nm=nm;
      this->cls=cls;
      this->s=s;
      this->id=id;
      this->math_marks=math_marks;
      this->eng_marks=eng_marks;
  }
  
};

bool cmp(Student a,Student b){
    if(a.math_marks+a.eng_marks==b.math_marks+b.eng_marks){
        return a.id<b.id;
    }else{
         return a.math_marks+a.eng_marks>b.math_marks+b.eng_marks;
     }
   
}

int main() {
    
    int n;
    cin>>n;
    
    Student students[n];
    for(int i=0;i<n;i++){
        string nm;
        int cls;
        string s;
        int id;
        int math_marks;
        int eng_marks;
        cin>>nm>>cls>>s>>id>>math_marks>>eng_marks;
        students[i].setValue(nm,cls,s,id,math_marks,eng_marks);
    }
    
    sort(students,students+n,cmp);
    
   for(int i=0;i<n;i++){
    cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }

  return 0;
}

