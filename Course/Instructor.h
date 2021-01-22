#pragma once
#ifndef INSTRUCTOR 
#define INSTRUCTOR 
#include <iostream> 
#include <string> 
using namespace std;
class Instructor { 
private: 
	string lastName; // last name 
	string firstName; // first name 
	string officeNumber; // office number 
public: 
	Instructor() // default constructor 
	{
		lastName = " ";
		firstName = " ";
		officeNumber = " ";
	} 
	Instructor(string lname, string fname, string office) // parametrized constructor 
	{
		set(lname, fname, office);
	}
	Instructor(const Instructor& anInstructor) // copy constructor
	{
		setLastName(anInstructor.getLastName());
		setFirstName(anInstructor.getFirstName());
		setOfficeNumber(anInstructor.getOfficeNumber());
	}
	~Instructor() // destructor
	{
		cout << "Destroying!" << endl;
	}
	void set(string lname, string fname, string office) 
	{
		lastName = lname;
		firstName = fname;
		officeNumber = office;
	}
	void setLastName(string lname)
	{
		lastName = lname;
	}
	void setFirstName(string fname)
	{
		firstName = fname;
	}
	void setOfficeNumber(string office)
	{
		officeNumber = office;
	}
	string getLastName() const
	{
		return lastName;
	}
	string getFirstName() const
	{
		return firstName;
	}
	string getOfficeNumber() const
	{
		return officeNumber;
	}
	void print() const // print function 
	{
		cout << "Last name: " << lastName << endl;
		cout << "First name: " << firstName << endl;
		cout << "Office number: " << officeNumber << endl;
	}
	friend ostream& operator << (ostream& strm, const Instructor& obj) // << operator
	{
		strm << "Last Name: " << obj.getLastName() << endl;
		strm << "First Name: " << obj.getFirstName() << endl;
		strm << "Office Number: " << obj.getOfficeNumber() << endl;
		return strm;
	}
	friend istream& operator >> (istream& strm, Instructor& obj) // >> operator
	{
		cout << "Enter the professor's last name: " << endl;
		strm >> obj.lastName;
		cout << "Enter the professor's first name: " << endl;
		strm >> obj.firstName;
		cout << "Enter the professor's office number: " << endl;
		strm >> obj.officeNumber;
		return strm;
	}
}; 
#endif