#include <string>
#include <iostream>
#include <vector>
#include "Student.h"

//getters
string Student::getStudentID() { return cStudentID; }
string Student::getFirstName() { return cFirstName; }
string Student::getLastName() { return cLastName; }
string Student::getEmail() { return cEmail; }
int Student::getAge() { return cAge; }
int* Student::getDegreeDay() { return cDegreeDays; }

//setters
void Student::setStudentID(string a) { cStudentID = a; }
void Student::setFirstName(string a) { cFirstName = a; }
void Student::setLastName(string a) { cLastName = a; }
void Student::setEmail(string a) { cEmail = a; }
void Student::setAge(int a) { cAge = a; }
int* Student::setDegreeDay() { return cDegreeDays; }

Student::Student(string studentIDA, string firstNameA, string lastNameA, string emailAddressA, int ageA, int daysInCourse1A, int daysInCourse2A, int daysInCourse3A) {
	setStudentID(studentIDA);
	setFirstName(firstNameA);
	setLastName(lastNameA);
	setEmail(emailAddressA);
	setAge(ageA);
	setDegreeDay()[0] = daysInCourse1A;
	setDegreeDay()[1] = daysInCourse2A;
	setDegreeDay()[2] = daysInCourse3A;
}

Student::~Student(){};
void Student::print() {};