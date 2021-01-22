#include "Instructor.h"

Instructor::Instructor() {
	lastName = " ";
	firstName = " ";
	officeNumber = " ";
}

Instructor::Instructor(string lname, string fname, string office) {
	set(lname, fname, office);
}

Instructor::Instructor(const Instructor& anInstructor) {
	setLastName(anInstructor.getLastName());
	setFirstName(anInstructor.getFirstName());
	setOfficeNumber(anInstructor.getOfficeNumber());
}

Instructor::~Instructor() {

}
 
void Instructor::set(string lname, string fname, string office) {
	lastName = lname;
	firstName = fname;
	officeNumber = office;
}

void Instructor::set(Instructor anInstructor) {
	
}

void Instructor::setLastName(string lname) {
	lastName = lname;
}

void Instructor::setFirstName(string fname) {
	firstName = fname;
}

void Instructor::setOfficeNumber(string office) {
	officeNumber = office;
}

string Instructor::getLastName() const {
	return lastName;
}

string Instructor::getFirstName() const {
	return firstName;
}

string Instructor::getOfficeNumber() const {
	return officeNumber;
}

Instructor Instructor::getInstructor() const {

}

void Instructor::print() const {
	cout << "Last name: " << lastName << endl;
	cout << "First name: " << firstName << endl;
	cout << "Office number: " << officeNumber << endl;
}

ostream& operator << (ostream& strm, const Instructor& obj) {
	strm << "Last Name: " << obj.getLastName() << endl;
	strm << "First Name: " << obj.getFirstName() << endl;
	strm << "Office Number: " << obj.getOfficeNumber() << endl;
	return strm;
}

istream& operator >> (istream& strm, Instructor& obj) {
	cout << "Enter the professor's last name: " << endl;
	strm >> obj.lastName;
	cout << "Enter the professor's first name: " << endl;
	strm >> obj.firstName;
	cout << "Enter the professor's office number: " << endl;
	strm >> obj.officeNumber;
	return strm;
}