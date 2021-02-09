#include "Essay.h"
#include "GradedActivity.h"

int main() {
	Essay grade1;
	int lab, hw, ex1, ex2, proj; // laboratory, homework, exam 1, exam 2, project

	cout << "CECS 2222 COURSE EVALUATION" << endl; // evaluation
	cout << "Laboratory 20pts" << endl;
	cout << "Homework 20pts" << endl;
	cout << "Exam 1 20pts" << endl;
	cout << "Exam 2 20pts" << endl;
	cout << "Project 20pts" << endl;
	cout << "TOTAL: 100pts" << endl;
	cout << endl;

	cout << "Input the following information to determine course grade: " << endl; // input info
	cout << "Enter the points acquired in the Lab: " << endl;
	cin >> lab;
	cout << "Enter the points acquired in the HW: " << endl;
	cin >> hw;
	cout << "Enter the points acquired in the Exam 1: " << endl;
	cin >> ex1;
	cout << "Enter the points acquired in the Exam 2: " << endl;
	cin >> ex2;
	cout << "Enter the points acquired in the Project: " << endl;
	cin >> proj;

	if (lab < 0 || hw < 0 || ex1 < 0 || ex2 < 0 || proj < 0) { // input validation if negative inputs
		cout << "Error, invalid input. Points must be positive value. Try again!" << endl;
		EXIT_FAILURE;
	}
	else {
		grade1.setGrade(lab, hw, ex1, ex2, proj); // sets grade
		char grade = grade1.getLetterGrade(); // returns the letter grade

		cout << endl;
		cout << "REPORT CARD" << endl; // display report card
		cout << grade1; // 
		cout << "Grade received: " << grade << endl;
	}

	system("pause");
	return 0;
}

/*
CECS 2222 COURSE EVALUATION
Laboratory 20pts
Homework 20pts
Exam 1 20pts
Exam 2 20pts
Project 20pts
TOTAL: 100pts

Input the following information to determine course grade:
Enter the points acquired in the Lab:
20
Enter the points acquired in the HW:
15
Enter the points acquired in the Exam 1:
10
Enter the points acquired in the Exam 2:
15
Enter the points acquired in the Project:
20

REPORT CARD
Points acquired in Lab: 20
Points acquired in HW: 15
Points acquired in Exam 1: 10
Points acquired in Exam 2: 15
Points acquired in Project: 20
Total points: 80 / 100
Grade received: B
Press any key to continue . . .
*/