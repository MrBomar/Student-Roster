#include <iostream>
#include "SecurityStudent.h"
using namespace std;

int main() {

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Leslie,Bomar,mrlesbomar@gmail.com,38,10,20,30,SOFTWARE"
    };

    for (int i = 0; i < 5; i++) {
        cout << studentData[i] << endl;
    }

	int b[3] = { 10, 20, 30 };

	SecurityStudent a("1A", "Leslie", "Bomar", "mrlesbomar@gmail.com", 38, b);

	return 0;
}