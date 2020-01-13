#pragma once
#include <iostream>
#include <vector>
#include "Student.h"

class SecurityStudent : public Student
{
private:
	Degree cDegree = Degree::SECURITY;
public:
	SecurityStudent(vector<string> bulkData) : Student(bulkData) {
	};
	string getDegreeProgram();
};

