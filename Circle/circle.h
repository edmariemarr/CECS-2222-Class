#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double aRadius);
	~Circle();
	void setRadius(double aRadius);
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	void display() const;
};
#endif