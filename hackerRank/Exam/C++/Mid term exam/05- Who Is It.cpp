// roblem Statement

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

//     First line will contain T, the number of test cases.
//     For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.

// Constraints

//     1 <= T <= 1000
//     1 <= ID <= 3
//     1 <= |Name| <= 100
//     'A' <= Section <= 'Z'
//     0 <= Total Marks <= 100

// Output Format

//     Ouptut the information as asked in the question.

// Sample Input 0

// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40

// Sample Output 0

// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50



#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  int id;
  char name[100];
  char section;
  int total_marks;

  Student(int id, char name[], char section, int total_marks) {
    this->id = id;
    strcpy(this->name, name);
    this->section = section;
    this->total_marks = total_marks;
  }
};

int main() {
   int t;
   cin >> t;
   while (t--) {

  Student *students[3];

  int id;
  char name[100];
  char section;
  int total_marks;

  for (int i = 0; i < 3; i++) {

    cin >> id;
    cin >> name;
    cin >> section;
    cin >> total_marks;
    students[i] = new Student(id, name, section, total_marks);
  }

  if (students[0]->total_marks >= students[1]->total_marks &&
      students[0]->total_marks >= students[2]->total_marks) {
    cout << students[0]->id << " " << students[0]->name << " "
         << students[0]->section << " " << students[0]->total_marks << endl;
  }

  else if (students[1]->total_marks >= students[0]->total_marks &&
      students[1]->total_marks >= students[2]->total_marks) {
    cout << students[1]->id << " " << students[1]->name << " "
         << students[1]->section << " " << students[1]->total_marks << endl;
  }else{
    cout << students[2]->id << " " << students[2]->name << " "
       << students[2]->section << " " << students[2]->total_marks << endl;
  }
  
  delete students[0];
  delete students[1];
  delete students[2];
   }

  return 0;
}

