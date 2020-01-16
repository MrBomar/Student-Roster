#include <string>
#include <iostream>
#include <vector>
#include "Student.h"

//getters
string Student::GetStudentID() { return cStudentID; }
string Student::GetFirstName() { return cFirstName; }
string Student::GetLastName() { return cLastName; }
string Student::GetEmail() { return cEmail; }
int Student::GetAge() { return cAge; }
int Student::GetDegreeDays(int a) { return cDegreeDays[a]; }

//setters
void Student::studentID(string a) { cStudentID = a; }
void Student::firstName(string a) { cFirstName = a; }
void Student::lastName(string a) { cLastName = a; }
void Student::email(string a) { cEmail = a; }
void Student::age(int a) { cAge = a; }
void Student::addDegreeDays(int a) {
	cDegreeDays[0] = cDegreeDays[1];
	cDegreeDays[1] = cDegreeDays[2];
	cDegreeDays[2] = a;
}

Student::Student(string studentIDA, string firstNameA, string lastNameA, string emailAddressA, int ageA, int daysInCourse1A, int daysInCourse2A, int daysInCourse3A) {
	studentID(studentIDA);
	firstName(firstNameA);
	lastName(lastNameA);
	email(emailAddressA);
	age(ageA);
	addDegreeDays(daysInCourse1A);
	addDegreeDays(daysInCourse2A);
	addDegreeDays(daysInCourse3A);
}

Student::~Student(){};

void Student::changeDegreeDays(int index, int value) { cDegreeDays[index] = value; }
void Student::print() {};