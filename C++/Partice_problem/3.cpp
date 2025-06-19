Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.


#include <bits/stdc++.h>
using namespace std;
class Students {
    
public:
  char name[100];
  int roll;
  char section;
  int math_marks;
  int cls;
  
  Students(char name[100], int roll, char section, int math_marks, int cls) {
    strcpy(this->name, name);
    this->roll = roll;
    this->section = section;
    this->math_marks = math_marks;
    this->cls = cls;
  }
  
};

int main() {
  char rafiulName[100]="Rafiul Islam";
  Students rafiul( rafiulName, 1, 'A', 90, 5);

  char pavelName[100]="kamruzzaman Pavel";
  Students pavel( pavelName, 2, 'B', 80, 2);

  char asfiaName[100]="Asfia Hossen Mohona";
  Students asfia( asfiaName, 2, 'C', 93, 4);

  if(rafiul.math_marks>pavel.math_marks && rafiul.math_marks>asfia.math_marks){
    cout<<rafiul.name;
  }else if(pavel.math_marks>rafiul.math_marks && pavel.math_marks>asfia.math_marks){
    cout<<pavel.name;
  
  }else{
    cout<<asfia.name;
  }

  return 0;
}