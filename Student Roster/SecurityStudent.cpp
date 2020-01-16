#pragma once
#include "Degree.h"
#include "SecurityStudent.h"

Degree SecurityStudent::degree() {
	return SECURITY;
};

void SecurityStudent::print() {
	cout << studentID() << "\tFirst Name: " << firstName() << "\tLast Name: " << lastName() << "\tAge: " << age() << " \tDays in course: {"
		<< getDegreeDays(0) << ", " << getDegreeDays(1) << ", " << getDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SecurityStudent::getDegreeProgram() {
	return "SECURITY";
}
