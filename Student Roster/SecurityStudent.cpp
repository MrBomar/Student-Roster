#pragma once
#include "Degree.h"
#include "SecurityStudent.h"

Degree SecurityStudent::degree() {
	return SECURITY;
};

void SecurityStudent::print() {
	cout << getStudentID() << "\tFirst Name: " << getFirstName() << "\tLast Name: " << getLastName() << "\tAge: " << getAge() << " \tDays in course: {"
		<< getDegreeDay()[0] << ", " << getDegreeDay()[1] << ", " << getDegreeDay()[2] << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SecurityStudent::getDegreeProgram() {
	return "SECURITY";
}
