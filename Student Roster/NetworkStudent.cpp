#pragma once
#include "NetworkStudent.h"
#include "Degree.h"

Degree NetworkStudent::degree() {
	return cDegree;
};

void NetworkStudent::print() {
	cout << GetStudentID() << "\tFirst Name: " << GetFirstName() << "\tLast Name: " << GetLastName() << "\tAge: " << GetAge() << " \tDays in course: {"
		<< GetDegreeDays(0) << ", " << GetDegreeDays(1) << ", " << GetDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
};

string NetworkStudent::getDegreeProgram() {
	return "NETWORK";
}
