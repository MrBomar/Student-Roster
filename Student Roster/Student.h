#pragma once
#include <string>
#include <vector>
#include "Degree.h"
using namespace std;

class Student
{
protected:
	string cStudentID, cFirstName, cLastName, cEmail;
	int cAge, cDegreeDays[3];

public:
	//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getDegreeDay();

	//Setters
	void setStudentID(string a);
	void setFirstName(string a);
	void setLastName(string a);
	void setEmail(string a);
	void setAge(int a);
	int* setDegreeDay();
	
	//Methods
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3);
	~Student();
	virtual void print();
	virtual string getDegreeProgram() { return "No Degree Selected"; };
};

