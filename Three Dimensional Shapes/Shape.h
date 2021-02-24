#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
	protected:
		string geometricFigureName;
		string color;
	public:
		Shape() {
			setGeometricFigureName("");
			setColor("");
		}
		Shape(string aGeometricFigureName, string aColor) {
			setGeometricFigureName(aGeometricFigureName);
			setColor(aColor);
		}
		~Shape() {
				cout << "Shape destructor" << endl;
				display();
				system("pause");
		}
		void setGeometricFigureName(string aGeometricFigureName) {
			geometricFigureName = aGeometricFigureName;
		}
		void setColor(string aColor) {
				color = aColor;
		}
		string getGeometricFigureName() const {
			return geometricFigureName;
		}
		string getColor() const {
			return color;
		}
		void display() const {
			cout << "Geometric Figure Name: " << getGeometricFigureName() << endl;
			cout << "Color: " << getColor() << endl;
		}
};
#endif