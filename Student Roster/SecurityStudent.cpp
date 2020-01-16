#pragma once
#include "Degree.h"
#include "SecurityStudent.h"

Degree SecurityStudent::degree() {
	return SECURITY;
};

void SecurityStudent::print() {
	cout << GetStudentID() << "\tFirst Name: " << GetFirstName() << "\tLast Name: " << GetLastName() << "\tAge: " << GetAge() << " \tDays in course: {"
		<< GetDegreeDays(0) << ", " << GetDegreeDays(1) << ", " << GetDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SecurityStudent::getDegreeProgram() {
	return "SECURITY";
}
