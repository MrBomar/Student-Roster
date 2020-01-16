#pragma once
#include "NetworkStudent.h"
#include "Degree.h"

Degree NetworkStudent::degree() {
	return cDegree;
};

void NetworkStudent::print() {
	cout << studentID() << "\tFirst Name: " << firstName() << "\tLast Name: " << lastName() << "\tAge: " << age() << " \tDays in course: {"
		<< getDegreeDays(0) << ", " << getDegreeDays(1) << ", " << getDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
};

string NetworkStudent::getDegreeProgram() {
	return "NETWORK";
}
