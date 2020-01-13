#pragma once
#include <iostream>
#include "Student.h"

class NetworkStudent : public Student
{
private:
	Degree cDegree = Degree::NETWORK;
public:
	NetworkStudent(vector<string> bulkData) : Student(bulkData) {};
	string getDegreeProgram();
};

