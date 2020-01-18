#include "SoftwareStudent.h"
#include "Degree.h"
#include <string>

Degree SoftwareStudent::degree() {
	return cDegree;
};

void SoftwareStudent::print() {
	cout << getStudentID() << "\tFirst Name: " << getFirstName() << "\tLast Name: " << getLastName() << "\tAge: " << getAge() << " \tDays in course: {"
		<< getDegreeDay()[0] << ", " << getDegreeDay()[1] << ", " << getDegreeDay()[2] << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SoftwareStudent::getDegreeProgram() {
	return "SOFTWARE";
}
