#ifndef RECTANGLEAREA_H
#define RECTANGLEAREA_H
#include <iostream>
using namespace std;

class RectangleArea {
private:
	double length, width;
public:
	RectangleArea(); // default constructor
	RectangleArea(double theLength, double theWidth); // constructor with parameters
	RectangleArea(const RectangleArea& theArea); // copy constructor
	~RectangleArea(); // destructor
	void setLength(double theLength);
	void setWidth(double theWidth);
	double getLength() const;
	double getWidth() const;
	double getArea() const;
	void display() const; 
	bool operator==(const RectangleArea& obj);
	bool operator!=(const RectangleArea& obj);
	bool operator<(const RectangleArea& obj);
	bool operator>(const RectangleArea& obj);
	friend ostream &operator << (ostream &strm, const RectangleArea& obj);
	friend istream &operator >> (istream &strm, RectangleArea& obj);
}; 
#endif
