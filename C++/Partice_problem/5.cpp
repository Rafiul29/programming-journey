// Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N.
// Student
// {
// 	name;
// 	roll;
// 	marks;
// }
// Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.
// Note: name will not contain any spaces.

// Sample Input
// Sample Output
// 5
// Asif 29 95
// Sakib 55 89
// Zubair 57 93
// Ahsan 39 86
// Joy 12 99
// Joy 12 99
// Asif 29 95
// Zubair 57 93
// Sakib 55 89
// Ahsan 39 86
// 5
// Asif 29 95
// Sakib 55 86
// Zubair 57 86
// Ahsan 39 86
// Joy 12 99
// Joy 12 99
// Asif 29 95
// Ahsan 39 86
// Sakib 55 86
// Zubair 57 86

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int marks;
  void setValue(string name, int roll, int marks)
  {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};

bool cmp(Student a, Student b)
{
  if (a.marks == b.marks)
  {
    return a.roll < b.roll;
  }
  else
  {
    return a.marks > b.marks;
  }
}

int main()
{

  int n;
  cin >> n;

  Student *students = new Student[n];

  for (int i = 0; i < n; i++)
  {
    cin >> students[i].name >> students[i].roll >> students[i].marks;
  }

  sort(students, students + n, cmp);

  for (int i = 0; i < n; i++)
  {
    cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
  }

  return 0;
}