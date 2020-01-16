#include "SoftwareStudent.h"
#include "Degree.h"
#include <string>

Degree SoftwareStudent::degree() {
	return cDegree;
};

void SoftwareStudent::print() {
	cout << GetStudentID() << "\tFirst Name: " << GetFirstName() << "\tLast Name: " << GetLastName() << "\tAge: " << GetAge() << " \tDays in course: {"
		<< GetDegreeDays(0) << ", " << GetDegreeDays(1) << ", " << GetDegreeDays(2) << "}\tDegree Program: " << getDegreeProgram() << endl;
}

string SoftwareStudent::getDegreeProgram() {
	return "SOFTWARE";
}
