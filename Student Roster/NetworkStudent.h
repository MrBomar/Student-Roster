#pragma once
#include <iostream>
#include "Degree.h"
#include "Student.h"

class NetworkStudent : public Student
{
private:
	Degree cDegree = NETWORK;
public:
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3)
		: Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3) {};
	Degree degree();
	string getDegreeProgram();
	void print();
};

