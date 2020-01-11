#pragma once
#include <iostream>
#include "Student.h"

class SecurityStudent : public Student
{
protected:
	string cMajor;
public:
	SecurityStudent(string StudentID, string firstName, string lastName, string email, int age, int* degreeDays) : Student(StudentID, firstName, lastName, email, age, degreeDays) {

		cout << cStudentID << cFirstName << cLastName << cEmail <<cAge << cDegreeDays[0] << cDegreeDays[1] << cDegreeDays[2] << endl;
	};
};

