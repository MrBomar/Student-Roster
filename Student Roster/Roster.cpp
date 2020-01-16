#include "Roster.h"
#include "Degree.h"
#include <string>

Roster::Roster() {};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
	switch (program) {
	case NETWORK:
		classRosterArray[arrayPosition] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		classRosterDegree[arrayPosition] = NETWORK;
		arrayPosition++;
		break;
	case SOFTWARE:
		//Set array pointer to instance of new software
		classRosterArray[arrayPosition] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		classRosterDegree[arrayPosition] = SOFTWARE;
		arrayPosition++;
		break;
	case SECURITY:
		//Set array pointer to instance of new security
		classRosterArray[arrayPosition] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		classRosterDegree[arrayPosition] = NETWORK;
		arrayPosition++;
		break;
	default:
		break;
	};
};

void Roster::printAll() {
	for (int i = 0; i < arrayPosition; i++) {
		switch (classRosterDegree[i]) {
		case NETWORK:
			static_cast<NetworkStudent*>(classRosterArray[i])->print();
			break;
		case SOFTWARE:
			static_cast<SoftwareStudent*>(classRosterArray[i])->print();
			break;
		case SECURITY:
			static_cast<SecurityStudent*>(classRosterArray[i])->print();
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
};

void Roster::printAverageDaysInCourse(string ID) {
	for (int i = 0; i < arrayPosition; i++) {
		switch (classRosterDegree[i]) {
		case NETWORK:
			if (static_cast<NetworkStudent*>(classRosterArray[i])->studentID() == ID) {
				int a = static_cast<NetworkStudent*>(classRosterArray[i])->getDegreeDays(0);
				int b = static_cast<NetworkStudent*>(classRosterArray[i])->getDegreeDays(1);
				int c = static_cast<NetworkStudent*>(classRosterArray[i])->getDegreeDays(2);
				cout << static_cast<NetworkStudent*>(classRosterArray[i])->studentID() << "\t" << (a + b + c) / 3 << endl;
			}
			break;
		case SOFTWARE:
			if (static_cast<SoftwareStudent*>(classRosterArray[i])->studentID() == ID) {
				int a = static_cast<SoftwareStudent*>(classRosterArray[i])->getDegreeDays(0);
				int b = static_cast<SoftwareStudent*>(classRosterArray[i])->getDegreeDays(1);
				int c = static_cast<SoftwareStudent*>(classRosterArray[i])->getDegreeDays(2);
				cout << static_cast<SoftwareStudent*>(classRosterArray[i])->studentID() << "\t" << (a + b + c) / 3 << endl;
			}
			break;
		case SECURITY:
			if (static_cast<SecurityStudent*>(classRosterArray[i])->studentID() == ID) {
				int a = static_cast<SecurityStudent*>(classRosterArray[i])->getDegreeDays(0);
				int b = static_cast<SecurityStudent*>(classRosterArray[i])->getDegreeDays(1);
				int c = static_cast<SecurityStudent*>(classRosterArray[i])->getDegreeDays(2);
				cout << static_cast<SecurityStudent*>(classRosterArray[i])->studentID() << "\t" << (a + b + c) / 3 << endl;
			}
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
};

void Roster::printByDegreeProgram(Degree degreeProgram) {
	for (int i = 0; i < arrayPosition; i++) {
		switch (classRosterDegree[i]) {
		case NETWORK:
			if (static_cast<NetworkStudent*>(classRosterArray[i])->degree() == degreeProgram) {
				static_cast<NetworkStudent*>(classRosterArray[i])->print();
			};
			break;
		case SOFTWARE:
			if (static_cast<SoftwareStudent*>(classRosterArray[i])->degree() == degreeProgram) {
				static_cast<SoftwareStudent*>(classRosterArray[i])->print();
			};
			break;
		case SECURITY:
			if (static_cast<SecurityStudent*>(classRosterArray[i])->degree() == degreeProgram) {
				static_cast<SecurityStudent*>(classRosterArray[i])->print();
			};
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
};

void Roster::printInvalidEmails() {
	for (int i = 0; i < arrayPosition; i++) {
		switch (classRosterDegree[i]) {
		case NETWORK:
			if (!validEmail(static_cast<NetworkStudent*>(classRosterArray[i])->email())) {
				cout << static_cast<NetworkStudent*>(classRosterArray[i])->email() << endl;
			}
			break;
		case SOFTWARE:
			if (!validEmail(static_cast<SoftwareStudent*>(classRosterArray[i])->email())) {
				cout << static_cast<SoftwareStudent*>(classRosterArray[i])->email() << endl;
			}
			break;
		case SECURITY:
			if (!validEmail(static_cast<SecurityStudent*>(classRosterArray[i])->email())) {
				cout << static_cast<SecurityStudent*> (classRosterArray[i])->email() << endl;
			}
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
};

int Roster::rosterLength() {
	return arrayPosition;
};

void Roster::remove(string ID) {
	int rosterPOS = 99;
	for (int i = 0; i < arrayPosition; i++) {
		switch (classRosterDegree[i]) {
		case NETWORK:
			if (static_cast<NetworkStudent*>(classRosterArray[i])->studentID() == ID) { rosterPOS = i; }
			break;
		case SOFTWARE:
			if (static_cast<SoftwareStudent*>(classRosterArray[i])->studentID() == ID) { rosterPOS = i; }
			break;
		case SECURITY:
			if (static_cast<SecurityStudent*>(classRosterArray[i])->studentID() == ID) { rosterPOS = i; }
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}

	if (rosterPOS == 99) {
		cout << "Student " << ID << " was not found." << endl;
	}
	else {
		for (int i = rosterPOS; i < arrayPosition; i++) {
			if (i + 1 < arrayPosition) {
				//Shift value forward
				classRosterArray[i] = classRosterArray[i + 1];
				classRosterDegree[i] = classRosterDegree[i + 1];
			}
			else {
				//Void last value
				classRosterArray[i] = NULL;
				classRosterDegree[i] = NONE;
			}
		}
		arrayPosition--;
		cout << "Student " << ID << " was successfully removed." << endl;
	}
};

bool Roster::validEmail(string studentEmail) {
	if (studentEmail.find('@') != 4294967295 && studentEmail.find('.') != 4294967295) {
		return true;
	}
	else if (studentEmail.find(' ') == 4294967295) {
		return false;
	}
	else {
		return false;
	};
};