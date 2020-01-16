#pragma once
#include <vector>
#include <string>
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "Degree.h"
using namespace std;

class Roster
{
private:
	int arrayPosition = 0;
	void* classRosterArray[5];
	Degree classRosterDegree[5];
	bool validEmail(string studentEmail);

public:
	Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printByDegreeProgram(Degree degreeProgram);
	void printInvalidEmails();
	void remove(string ID);
	int rosterLength();
};

