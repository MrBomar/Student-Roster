#pragma once
#include <iostream>
#include <vector>
#include "Student.h"

class SecurityStudent : public Student
{
private:
	Degree cDegree = SECURITY;
public:
	SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3)
		: Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3) {};
	Degree degree();
	string getDegreeProgram();
	void print();
};

