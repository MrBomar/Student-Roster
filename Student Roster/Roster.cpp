#include "Roster.h"
#include "Degree.h"
#include <string>

Roster::Roster(const string* dataArray) {

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
			secondCommaPosition = dataArray[i].find(',', firstCommaPosition);
			int stringSize = secondCommaPosition - firstCommaPosition;
			
			//Extract string
			values.push_back(dataArray[i].substr(firstCommaPosition, stringSize));

			//End loop test
			commaFound = (secondCommaPosition > -1) ? true: false;
		} while (commaFound);
		
		if (values[8] == "NETWORK") {
			classRosterArray[i] =  new NetworkStudent(values);
			classRosterDegree[i] = NETWORK;
		}
		else if (values[8] == "SOFTWARE") {
			classRosterArray[i] =  new SoftwareStudent(values);
			classRosterDegree[i] = SOFTWARE;
		}
		else {
			classRosterArray[i] = new SecurityStudent(values);
			classRosterDegree[i] = SECURITY;
		}
	}
}

void Roster::printAll() {
	for (int i = 0; i < 5; i++) {
		cout << classRosterArray[i] << endl;
		
	}
}