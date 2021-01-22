#pragma once
#ifndef COURSE 
#define COURSE 
#include <iostream> 
#include <string> 
#include <iomanip>
#include "Instructor.h" 
#include "Textbook.h" 
using namespace std; 
class Course { 
private: 
	string courseName; // course name 
	string courseCode; // course code
	Instructor instructor; // instructor 
	Textbook textbook; // textbook 
public: 
	Course() // default constructor
	{
		courseName = " ";
		courseCode = " ";
	}
	Course(string course, string code, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher) // parametrized constructor
	{
		setCourse(courseName);
		setCourseCode(courseCode);
		instructor.set(instrLastName, instrFirstName, instrOffice);
		textbook.set(textTitle, author, publisher);
	}
	Course(const Course& aCourse) // copy constructor
	{
		setCourse(aCourse.getCourse());
		setCourseCode(aCourse.getCourseCode());
	}
	void setCourse(string course)
	{
		courseName = course;
	}
	void setCourseCode(string code)
	{
		courseCode = code;
	}
	string getCourse() const
	{
		return courseName;
	}
	string getCourseCode() const
	{
		return courseCode;
	}
	void print() const // print function
	{
		cout << "Course name: " << getCourse() << endl;
		cout << "Course code: " << getCourseCode() << endl;
	}
	friend ostream& operator << (ostream& strm, const Course& obj) // << operator
	{
		strm << "Course Name: " << obj.getCourse() << endl;
		strm << "Course Code: " << obj.getCourseCode() << endl;
		return strm;
	}
	friend istream& operator >> (istream& strm, Course& obj) // >> operator
	{
		cout << "Enter the course name: " << endl;
		strm >> obj.courseName;
		cout << "Enter the course code: " << endl;
		strm >> obj.courseCode;
		return strm;
	}
}; 
#endif