#pragma once
#ifndef ESSAY_H
#define ESSAY_H
#include <iostream>
using namespace std;
#include <iomanip>
#include "GradedActivity.h"

class Essay : public GradedActivity {
private:
	int lab, hw, ex1, ex2, project, total; // laboratory, homework, exam 1, exam 2, project, total grade
public:
	Essay() { // default constructor
		lab = 0;
		hw = 0;
		ex1 = 0;
		ex2 = 0;
		project = 0;
		total = 0;
	}
	Essay(int theLab, int theHW, int theEx1, int theEx2, int theProject, int theTotal) { // parametrized constructor
		setLab(theLab);
		setHW(theHW);
		setEx1(theEx1);
		setEx2(theEx2);
		setProject(theProject);
		setTotal(theTotal);
	}
	Essay(const Essay& theEssay) { // copy constructor
		setLab(theEssay.getLab());
		setHW(theEssay.getHW());
		setEx1(theEssay.getEx1());
		setEx2(theEssay.getEx2());
		setProject(theEssay.getProject());
		setTotal(theEssay.getTotal());
	}
	~Essay() { // destructor
		cout << "Destroying the object!" << endl;
	}
	void setGrade(int theLab, int theHW, int theEx1, int theEx2, int theProject) {
		lab = theLab;
		hw = theHW;
		ex1 = theEx1;
		ex2 = theEx2;
		project = theProject;
		total = getTotal();
		setScore(total);
	}
	void setLab(int theLab) {
		lab = theLab;
	}
	void setHW(int theHW) {
		hw = theHW;
	}
	void setEx1(int theEx1) {
		ex1 = theEx1;
	}
	void setEx2(int theEx2) {
		ex2 = theEx2;
	}
	void setProject(int theProject) {
		project = theProject;
	}
	void setTotal(int theTotal) {
		total = theTotal;
	}
	int getLab() const {
		return lab;
	}
	int getHW() const {
		return hw;
	}
	int getEx1() const {
		return ex1;
	}
	int getEx2() const {
		return ex2;
	}
	int getProject() const {
		return project;
	}
	int getTotal() const {
		return project + ex1 + ex2 + hw + lab;
	}
	friend ostream& operator << (ostream& strm, const Essay& obj) {
		strm << "Points acquired in Lab: " << obj.getLab() << endl;
		strm << "Points acquired in HW: " << obj.getHW() << endl;
		strm << "Points acquired in Exam 1: " << obj.getEx1() << endl;
		strm << "Points acquired in Exam 2: " << obj.getEx2() << endl;
		strm << "Points acquired in Project: " << obj.getProject() << endl;
		strm << "Total points: " << obj.getTotal() << " / 100" << endl;
		return strm;
	}
	friend istream& operator >> (istream& strm, Essay& obj) {
		cout << "Enter the points acquired in the Lab: " << endl;
		strm >> obj.lab;
		cout << "Enter the points acquired in the HW: " << endl;
		strm >> obj.hw;
		cout << "Enter the points acquired in the Exam 1: " << endl;
		strm >> obj.ex1;
		cout << "Enter the points acquired in the Exam 2: " << endl;
		strm >> obj.ex2;
		cout << "Enter the points acquired in the Project: " << endl;
		strm >> obj.project;
		return strm;
	}
}; 
#endif