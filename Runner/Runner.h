#pragma once
#ifndef RUNNER_H
#define RUNNER_H
#include <iostream>
using namespace std;

class Runner {
private:
	string name;
	int hours, minutes, seconds;
public:
	Runner();
	Runner(string theName, int theHours, int theMinutes, int theSeconds);
	Runner(const Runner& theRunner);
	~Runner();
	void setName(string theName);
	void setHours(int theHours);
	void setMinutes(int theMinutes);
	void setSeconds(int theSeconds);
	string getName() const;
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	int getConversion() const;
	void display() const;
	bool operator > (const Runner& obj);
	friend ostream& operator << (ostream& strm, const Runner& obj);
	friend istream& operator >> (istream& strm, Runner& obj);
};
#endif