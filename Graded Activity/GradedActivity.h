#pragma once
#include <iostream>
using namespace std;
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity {
private:
	double score; // holds the numeric score
public:
	GradedActivity() // default constructor
	{ score = 0.0; }
	GradedActivity(double s) // constructor
	{ score = s; }
	void setScore(double s) // mutator
	{ score = s; }
	double getScore() const // accessor
	{ return score; }
	char getLetterGrade() const { // returns letter grade
		char letterGrade; // holds letter grade

		if (score > 89)
			letterGrade = 'A';
		else if (score > 79)
			letterGrade = 'B';
		else if (score > 69)
			letterGrade = 'C';
		else if (score > 59)
			letterGrade = 'D';
		else
			letterGrade = 'F';
		return letterGrade;
	}
};
#endif