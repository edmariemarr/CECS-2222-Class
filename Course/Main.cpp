#include "Course.h"

int main() {
	Course* winter2020;
	int numClasses; // holds number of classes taken in the trimester
	string courseName, courseCode;

	// input number of classes taken in the trimester
	cout << "How many classes are you currently taking? " << endl;
	cin >> numClasses;
	cin.ignore();
	
	winter2020 = new Course[numClasses];

	// input all the classes currently being taken
	for (int i = 0; i < numClasses; i++) {
		cout << "For class #" << i + 1 << ": " << endl;
		cout << "Enter the course name: ";
		getline(cin, courseName);
		winter2020[i].setCourse(courseName);
		cout << "Enter the course code: ";
		getline(cin, courseCode);
		winter2020[i].setCourseCode(courseCode);
	}

	// input extra information about one class
	string lastName, firstName, officeNum, title, author, publisher;
	cout << "For " << winter2020[0].getCourse() << " input the following information: " << endl;
	cout << "Enter professor's last name: ";
	getline(cin, lastName);
	cout << "Enter professor's first name: ";
	getline(cin, firstName);
	cout << "Enter professor's office number: ";
	getline(cin, officeNum);
	cout << "Enter textbook title: ";
	getline(cin, title);
	cout << "Enter textbook author: ";
	getline(cin, author);
	cout << "Enter textbook publisher: ";
	getline(cin, publisher);

	// output information
	cout << endl;
	cout << "WINTER 2020 TRIMESTER CLASS INFORMATION" << endl;
	for (int i = 0; i < numClasses; i++) {
		cout << "-- Class #" << i + 1 << " --" << endl;
		winter2020[i].print();
	}

	cout << endl;
	cout << "INSTRUCTOR INFORMATION FOR CLASS " << winter2020[0].getCourse() << endl;
	Instructor instr1(lastName, firstName, officeNum);
	instr1.print();

	cout << endl;
	cout << "TEXTBOOK INFORMATION FOR CLASS " << winter2020[0].getCourse() << endl;
	Textbook txt1(title, author, publisher);
	txt1.print();
	cout << endl;

	delete[] winter2020;
	winter2020 = nullptr;

	system("pause");
	return 0;
}
/*
How many classes are you currently taking?
5
For class #1:
Enter the course name: Computer Programming II
Enter the course code: CECS2222
For class #2:
Enter the course name: Computer Programming II Lab
Enter the course code: CECS2223
For class #3:
Enter the course name: Electrical Measurements Lab
Enter the course code: EE2001
For class #4:
Enter the course name: Circuits Analysis II
Enter the course code: EE2020
For class #5:
Enter the course name: Electronics I
Enter the course code: EE2500
For Computer Programming II input the following information:
Enter professor's last name: Talavera
Enter professor's first name: Claudia
Enter professor's office number: 123
Enter textbook title: Starting Out With C++
Enter textbook author: Tony Gaddis
Enter textbook publisher: Addison-Wesley

WINTER 2020 TRIMESTER CLASS INFORMATION
-- Class #1 --
Course name: Computer Programming II
Course code: CECS2222
-- Class #2 --
Course name: Computer Programming II Lab
Course code: CECS2223
-- Class #3 --
Course name: Electrical Measurements Lab
Course code: EE2001
-- Class #4 --
Course name: Circuits Analysis II
Course code: EE2020
-- Class #5 --
Course name: Electronics I
Course code: EE2500

INSTRUCTOR INFORMATION FOR CLASS Computer Programming II
Last name: Talavera
First name: Claudia
Office number: 123

TEXTBOOK INFORMATION FOR CLASS Computer Programming II
Textbook title: Starting Out With C++
Textbook author: Tony Gaddis
Publisher: Addison-Wesley

Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Destroying!
Press any key to continue . . .
Destroying!
Destroying!

*/