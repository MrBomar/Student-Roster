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
	void *classRosterArray[5];
	Degree classRosterDegree[5];

public:
	Roster(const string* dataArrayx);
	void printAll();
};

