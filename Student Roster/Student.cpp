#include <string>
#include <iostream>
#include <vector>
#include "Student.h"

//getters
string Student::studentID() { return cStudentID; }
string Student::firstName() { return cFirstName; }
string Student::lastName() { return cLastName; }
string Student::email() { return cEmail; }
int Student::age() { return cAge; }
int Student::getDegreeDays(int a) { return cDegreeDays[a]; }

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