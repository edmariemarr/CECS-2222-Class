#include "Runner.h"

Runner::Runner() {
	name = " ";
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Runner::Runner(string theName, int theHours, int theMinutes, int theSeconds) {
	setName(theName);
	setHours(theHours);
	setMinutes(theMinutes);
	setSeconds(theSeconds);
}

Runner::Runner(const Runner& theRunner) {
	setName(theRunner.getName());
	setHours(theRunner.getHours());
	setMinutes(theRunner.getMinutes());
	setSeconds(theRunner.getSeconds());
}

Runner::~Runner() {
	cout << "Destroying the object!" << endl;
	system("pause");
}

void Runner::setName(string theName) {
	name = theName;
}

void Runner::setHours(int theHours) {
	hours = theHours;
}

void Runner::setMinutes(int theMinutes) {
	minutes = theMinutes;
}

void Runner::setSeconds(int theSeconds) {
	seconds = theSeconds;
}

string Runner::getName() const {
	return name;
}

int Runner::getHours() const {
	return hours;
}

int Runner::getMinutes() const {
	return minutes;
}

int Runner::getSeconds() const {
	return seconds;
}

int Runner::getConversion() const {
	return (getHours() * 3600) + (getMinutes() * 60) + (getSeconds());
}

void Runner::display() const {
	cout << "Runner Name: " << getName() << endl;
	cout << "Runner Time (HH:MM:SS): " << getHours() << " : " << getMinutes() << " : " << getSeconds() << endl;
}

bool Runner::operator > (const Runner& obj) {
	if (getConversion() > obj.getConversion())
		return true;
	else
		return false;
}

ostream& operator << (ostream& strm, const Runner& obj) {
	strm << "Name: " << obj.getName() << endl;
	strm << "Hours: " << obj.getHours() << endl;
	strm << "Minutes: " << obj.getMinutes() << endl;
	strm << "Seconds: " << obj.getSeconds() << endl;
	return strm;
}

istream& operator >> (istream& strm, Runner& obj) {
	cout << "Enter the runner's name: " << endl;
	strm >> obj.name;
	cout << "Enter the hours ran: " << endl;
	strm >> obj.hours;
	cout << "Enter the minutes ran: " << endl;
	strm >> obj.minutes;
	cout << "Enter the seconds ran: " << endl;
	strm >> obj.seconds;
	return strm;

}