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

Student::Student(vector<string> bulkData) {
	studentID(bulkData[0]);
	firstName(bulkData[1]);
	lastName(bulkData[2]);
	email(bulkData[3]);
	age(stoi(bulkData[4]));
	addDegreeDays(stoi(bulkData[5]));
	addDegreeDays(stoi(bulkData[6]));
	addDegreeDays(stoi(bulkData[7]));
}

Student::~Student(){};

void Student::changeDegreeDays(int index, int value) { cDegreeDays[index] = value; }
void Student::print() {};