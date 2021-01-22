#include "Course.h"

Course::Course() {
	courseName = " ";
	courseCode = " ";
	textbook = " ";
}

Course::Course(string course, string code, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher) {

}

Course::Course(string course, string code, Instructor anInstructor, Textbook aTextbook) {

}

Course::Course(const Course& aCourse) {
	setCourse(aCourse.getCourse());
	setCourseCode(aCourse.getCourseCode());
	setTextbook(aCourse.getTextbook());
}

void Course::setCourse(string course, string code, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher) {

}

void Course::setCourse(string course, string code, Instructor anInstructor, Textbook aTextbook) {

}

void Course::setCourse(string course) {
	courseName = course;
}

void Course::setCourseCode(string code) {
	courseCode = code;
}

void Course::setInstructor(string instrLastName, string instrFirstName, string instrOffice) {
	lastName = instrLastName;
	firstName = instrFirstName;
	officeNumber = instrOffice;
}

void Course::setInstructor(Instructor anInstructor) {

}

void Course::setTextbook(string textTitle, string theAuthor, string thePublisher) {
	title = textTitle;
	author = theAuthor;
	publisher = thePublisher;
}

void Course::setTextbook(Textbook aTextbook) {

}

string Course::getCourse() const {

}

string Course::getCourseCode() const {

}

Instructor Course::getInstructor() const {

}

Textbook Course::getTextbook() const {

}

void Course::print() const {

}

ostream& operator << (ostream& strm, const Course& obj) {
	strm << "Course Name: " << obj.getCourse() << endl;
	strm << "Course Code: " << obj.getCourseCode() << endl;
	strm << "Textbook: " << obj.getTextbook() << endl;
	return strm;
}

istream& operator >> (istream& strm, Course& obj) {
	cout << "Enter the course name: " << endl;
	strm >> obj.courseName;
	cout << "Enter the course code: " << endl;
	strm >> obj.courseCode;
	cout << "Enter the textbook: " << endl;
	strm >> obj.textbook;
	return strm;
}