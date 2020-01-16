#include "SoftwareStudent.h"
#include "Degree.h"
#include <string>

Degree SoftwareStudent::degree() {
	return cDegree;
};

void SoftwareStudent::print() {
	cout << studentID() << "\tFirst Name: " << firstName() << "\tLast Name: " << lastName() << "\tAge: " << age() << " \tDays in course: {"
		<< getDegreeDays(0) << ", " << getDegreeDays(1) << ", " << getDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SoftwareStudent::getDegreeProgram() {
	return "SOFTWARE";
}
