#include "RectangleArea.h"

RectangleArea::RectangleArea() {
	length = 0.0;
	width = 0.0;
}

RectangleArea::RectangleArea(double theLength, double theWidth) {
	setLength(theLength);
	setWidth(theWidth);
}

RectangleArea::RectangleArea(const RectangleArea& theArea) {
	setLength(theArea.getLength());
	setWidth(theArea.getWidth());
}

RectangleArea::~RectangleArea() {
	cout << "Destroying the object!" << endl;
	system("pause");
}

void RectangleArea::setLength(double theLength) {
	length = theLength;
}

void RectangleArea::setWidth(double theWidth) {
	width = theWidth;
}

double RectangleArea::getLength() const {
	return length;
}

double RectangleArea::getWidth() const {
	return width;
}

double RectangleArea::getArea() const {
	return getLength() * getWidth();
}

void RectangleArea::display() const {
	cout << "Length: " << getLength() << endl;
	cout << "Width: " << getWidth() << endl;
	cout << "Area: " << getArea() << endl;
}

bool RectangleArea::operator==(const RectangleArea& obj) {
	if (getArea() == obj.getArea())
		return true;
	else
		return false;
}

bool RectangleArea::operator!=(const RectangleArea& obj) {
	if (getArea() != obj.getArea())
		return true;
	else
		return false;
}

bool RectangleArea::operator<(const RectangleArea& obj) {
	if (getArea() < obj.getArea())
		return true;
	else
		return false;
}

bool RectangleArea::operator>(const RectangleArea& obj) {
	if (getArea() > obj.getArea())
		return true;
	else
		return false;
}

ostream &operator << (ostream &strm, const RectangleArea&obj) {
	strm << "Length: " << obj.getLength() << endl;
	strm << "Width: " << obj.getWidth() << endl;
	strm << "Area: " << obj.getArea() << endl;
	return strm;
}

istream &operator >> (istream &strm, RectangleArea&obj) {
	cout << "Enter the length: " << endl;
	strm >> obj.length;
	cout << "Enter the width: " << endl;
	strm >> obj.width;
	return strm;
}