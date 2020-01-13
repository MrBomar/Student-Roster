#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Degree.h"

class SoftwareStudent : public Student
{
private:
	Degree cDegree = Degree::SOFTWARE;
public:
	SoftwareStudent(vector<string> bulkData) : Student(bulkData) {}
	string getDegreeProgram();
};

