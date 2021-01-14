#pragma once
#ifndef MOVIEPROFIT_H
#define MOVIEPROFIT_H
#include <iostream>
#include<iomanip>
using namespace std;

class MovieProfit {
private:
	char *title, *director;
	int releaseYear, runningTime;
	float cost, revenue;
public:
	MovieProfit();
	MovieProfit(char *theTitle, char *theDirector, int theYear, int theTime, float theCost, float theRevenue);
	MovieProfit(const MovieProfit& theProfit);
	~MovieProfit();
	void setTitle(char *theTitle);
	void setDirector(char *theDirector);
	void setReleaseYear(int theYear);
	void setRunningTime(int theTime); // running time in minutes
	void setProductionCosts(float theCost);
	void setRevenue(float theRevenue); // first year revenues
	char *getTitle() const;
	char *getDirector() const;
	int getReleaseYear() const;
	int getRunningTime() const;
	float getProductionCosts() const;
	float getRevenue() const;
	float getProfit() const; // first year profit or loss
	void display() const;
	friend ostream& operator << (ostream& strm, const MovieProfit& obj);
	friend istream& operator >> (istream& strm, MovieProfit& obj);
	void operator = (const MovieProfit& obj);
};
#endif
