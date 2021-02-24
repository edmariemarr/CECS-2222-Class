#pragma once
#include "Shape.h"
class ThreeDimensionalShape : public Shape
{
protected:
	double surfaceArea;
	double volume;
public:
	ThreeDimensionalShape() {
		setSurfaceArea(0.0);
		setVolume(0.0);
		setColor(" ");
		setGeometricFigureName(" ");
	}

	ThreeDimensionalShape(double aSurfaceArea, double aVolume, double aHeight) {
		setSurfaceArea(aSurfaceArea);
		setVolume(aVolume);
	}
	ThreeDimensionalShape(double aSurfaceArea, double aVolume, string aGeometricFigureName, string aColor) {
		setSurfaceArea(aSurfaceArea);
		setVolume(aVolume);
	}
	~ThreeDimensionalShape() {
		cout << "ThreeDimensionalShape destructor" << endl;
		display();
		system("pause");
	}
	void setSurfaceArea(double aSurfaceArea) {
		surfaceArea = aSurfaceArea;
	}
	void setVolume(double aVolume) {
		volume = aVolume;
	}
	double getSurfaceArea() const {
		return surfaceArea;
	}
	double getVolume() const {
		return volume;
	}
	void display() const {
		Shape::display();
		cout << "Surface Area: " << getSurfaceArea() << endl;
		cout << "Volume: " << getVolume() << endl;
	}
};