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
