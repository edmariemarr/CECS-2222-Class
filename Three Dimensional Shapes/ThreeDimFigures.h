#pragma once
#ifndef THREEDIMFIGURES_H
#define THREEDIMFIGURES_H
#include "ThreeDimensionalShape.h"
#include <cmath>
class ThreeDimFigures : public ThreeDimensionalShape
{
private:
	double radius;
	double volume;
	double surfaceArea;
	double height;
	double pi = atan(1.0) * 4;
	
public:
	ThreeDimFigures() { // default constructor
		setRadius(0.0);
		setHeight(0.0);
		setColor(" ");
		setGeometricFigureName(" ");
		setSurfaceArea(0.0);
		setVolume(0.0);
	}
	ThreeDimFigures(double aRadius, string aGeometricFigureName, string aColor) { // parameter constructor for sphere
		setRadius(aRadius);
		setColor(aColor);
		setGeometricFigureName(aGeometricFigureName);
		setSurfaceArea(getSphereSA());
		setVolume(getSphereVolume());
	}
	ThreeDimFigures(double aRadius, double aHeight, string aGeometricFigureName, string aColor) { // parameter constructor for cone or cylinder
		setRadius(aRadius);
		setHeight(aHeight);
		setColor(aColor);
		setGeometricFigureName(aGeometricFigureName);

		if (aGeometricFigureName == "Cone") {
			setSurfaceArea(getConeSA());
			setVolume(getConeVolume());
		}
		else if (aGeometricFigureName == "Cylinder") {
			setSurfaceArea(getCylinderSA());
			setVolume(getCylinderVolume());
		}
	}
	~ThreeDimFigures() { // destructor
		cout << "ThreeDimFigures destructor" << endl;
		display();
		system("pause");
	}
	void setRadius(double aRadius) {
		radius = aRadius;
	}
	void setHeight(double aHeight) {
		height = aHeight;
	}
	double getRadius() const {
		return radius;
	}
	double getHeight() const {
		return height;
	}
	double getSphereVolume() const { // sphere volume
		return (4.0 / 3.0 * pi * pow(getRadius(), 3));
	}
	double getSphereSA() const { // sphere surface area
		return (4 * pi * pow(getRadius(), 2));
	}
	double getConeVolume() const { // cone volume
		return (1.0 / 3.0 * pi * pow(getRadius(), 2) * getHeight());
	}
	double getConeSA() const { // cone surface area
		return (pi * getRadius() * (sqrt(pow(getRadius(), 2) + pow(getHeight(), 2))));
	}
	double getCylinderVolume() const { // cylinder volume
		return (pi * pow(getRadius(), 2) * getHeight());
	}
	double getCylinderSA() const { // cylinder surface area
		return (2 * pi * getRadius() * getHeight());
	}
	void displaySphere() const { // display for sphere
		cout << "Here are the sphere's properties:\n";
		cout << "Radius: " << getRadius() << endl;
		cout << "Surface Area: " << getSphereSA() << endl;
		cout << "Volume: " << getSphereVolume() << endl;

	}
	void displayCone() const { // display for cone
		cout << "Here are the cone's properties:\n";
		cout << "Radius: " << getRadius() << endl;
		cout << "Height: " << getHeight() << endl;
		cout << "Surface Area: " << getConeSA() << endl;
		cout << "Volume: " << getConeVolume() << endl;

	}
	void displayCylinder() const { // display for cylinder
		cout << "Here are the cylinder's properties:\n";
		cout << "Radius: " << getRadius() << endl;
		cout << "Height: " << getHeight() << endl;
		cout << "Surface Area: " << getCylinderSA() << endl;
		cout << "Volume: " << getCylinderVolume() << endl;

	}
	friend ostream& operator << (ostream& output, const ThreeDimFigures& tempFigures) {
		output << "Radius: " << tempFigures.radius << endl;
		output << "Height: " << tempFigures.height << endl;
		output << "Surface Area: " << tempFigures.surfaceArea << endl;
		output << "Volume: " << tempFigures.volume << endl;
		return output;
	}
	friend istream& operator >> (istream& input, ThreeDimFigures& tempFigures) {
		input >> tempFigures.radius;
		input >> tempFigures.height;
		input >> tempFigures.surfaceArea;
		input >> tempFigures.volume;
		return input;
	}
};
#endif