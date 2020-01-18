#pragma once
#include "NetworkStudent.h"
#include "Degree.h"

Degree NetworkStudent::degree() {
	return cDegree;
};

void NetworkStudent::print() {
	cout << getStudentID() << "\tFirst Name: " << getFirstName() << "\tLast Name: " << getLastName() << "\tAge: " << getAge() << " \tDays in course: {"
		<< getDegreeDay()[0] << ", " << getDegreeDay()[1] << ", " << getDegreeDay()[2] << "}\tDegree Program: " << getDegreeProgram() << endl;
};

string NetworkStudent::getDegreeProgram() {
	return "NETWORK";
}
