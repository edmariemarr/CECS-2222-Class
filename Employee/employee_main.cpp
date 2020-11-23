#include <iostream>
#include "employee.h"
#include<iomanip>
using namespace std;

int main() {

	Employee Susan;
	Susan.setEmployee("Susan Meyers", 47899, "Accounting", "Vice President");

	Employee Mark;
	Mark.setEmployee("Mark Jones", 39119, "IT", "Programmer");

	Employee Joy;
	Joy.setEmployee("Joy Rogers", 81774, "Manufacturing", "Engineer");

	cout << left << setw(15) << "Name:" << setw(8) << "ID#:";
	cout << setw(15) << "Department:" << setw(15) << "Position:" << endl;

	Susan.display();
	Mark.display();
	Joy.display();

	return 0;

}