#include <string>
#include <iostream>
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
void Student::changeDegreeDays(int index, int value) { cDegreeDays[index] = value; }

//Constructor
Student::Student(string StudentID, string firstName, string lastName, string email, int age, int* degreeDays) {
	cStudentID = StudentID;
	cFirstName = firstName;
	cLastName = lastName;
	cEmail = email;
	cAge = age;
	for (int i = 0; i < 3; i++) {
		cDegreeDays[i] = degreeDays[i];
	};
};