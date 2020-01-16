#include <iostream>
#include "Degree.h"
#include "Roster.h"
using namespace std;

int main() {

	//Application Identification
	cout << "Course: Scripting and Programming - Applications – C867" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 000860355" << endl;
	cout << "Student Name : Leslie C.Bomar III" << endl << endl;


    const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Leslie,Bomar,mrlesbomar@gmail.com,38,10,20,30,SOFTWARE"
    };

	//Create new student roster
	Roster* classRoster = new Roster;

	//Loop through the array records
	for (int i = 0; i < 5; i++) {
		//Once in the record, we need to cycle through the comma seperated values
		int firstCommaPosition = 0;
		int secondCommaPosition = 0;
		int commaFound = false;
		vector<string> values;
		do
		{
			firstCommaPosition = (secondCommaPosition > 0) ? secondCommaPosition + 1 : 0;
			secondCommaPosition = studentData[i].find(',', firstCommaPosition);
			int stringSize = secondCommaPosition - firstCommaPosition;

			//Extract string
			values.push_back(studentData[i].substr(firstCommaPosition, stringSize));

			//End loop test
			commaFound = (secondCommaPosition > -1) ? true : false;
		} while (commaFound);

		//Send values to Roster to create student objects
		int tempInt1 = std::stoi(values[4]);
		int tempInt2 = std::stoi(values[5]);
		int tempInt3 = std::stoi(values[6]);
		int tempInt4 = std::stoi(values[7]);
		Degree tempDegree = (values[8] == "NETWORK") ? NETWORK : (values[8] == "SOFTWARE") ? SOFTWARE : SECURITY ;
		classRoster->add(values[0], values[1], values[2], values[3], tempInt1, tempInt2, tempInt3, tempInt4, tempDegree);
	}

	//Print complete student roster
	cout << "Complete Student Roster:" << endl;
	classRoster->printAll();
	cout << endl;

	//Print invalid emails
	cout << "Invalid Emails: " << endl;
	classRoster->printInvalidEmails();
	cout << endl;

	//loop through classRosterArray and for each element:
	cout << "Average days in course:" << endl;
	cout << "ID\tAvgDaysInCourse" << endl;
	for (int i = 0; i < 5; i++) {
		string ID = studentData[i].substr(0, 2);
		classRoster->printAverageDaysInCourse(ID);
	}
	cout << endl;

	//Print software program
	cout << "Roster of Software program students:" << endl;
	classRoster->printByDegreeProgram(SOFTWARE);
	cout << endl;

	//Removed student A3
	cout << "Attempting to remove student A3:" << endl;
	classRoster->remove("A3");
	cout << endl;

	//2nd attempt at removing student A3
	cout << "2nd attempt at removing student A3:" << endl;
	classRoster->remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.

	//Desctructor
	delete classRoster;

	return 0;
}