#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sId, char sName[20]) {
  studentId = sId;
  strcpy(name,sName);
  
}

// Display StudentId and Name
 void Student::display() {
  cout<<"student ID number is: "<<studentId<<endl;
  cout<<"student name is: "<<name<<endl;
}