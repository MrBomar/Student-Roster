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
	string studentID();
	string firstName();
	string lastName();
	string email();
	int age();
	int getDegreeDays(int a);

	//Setters
	void studentID(string a);
	void firstName(string a);
	void lastName(string a);
	void email(string a);
	void age(int a);
	void addDegreeDays(int a);
	void changeDegreeDays(int index, int value);
	
	//Methods
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3);
	~Student();
	virtual void print();
	virtual string getDegreeProgram() { return "No Degree Selected"; };
};

