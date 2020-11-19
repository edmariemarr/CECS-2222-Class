#include <iostream>
#include <cmath>
using namespace std;
#include "circle.h"
#include <cstdlib>
const double PI = 3.14159;

Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double aRadius) {
	radius = aRadius;
}
Circle::~Circle() { // destructor
	cout << "Destruyendo el objeto\n";
	display();
	system("pause");
}
void Circle::setRadius(double aRadius) {
	radius = aRadius;
}
double Circle::getRadius() const {
	if (radius >= 0)
		return radius;
	else {
		cout << "Radio invalido" << endl;
		exit(EXIT_FAILURE);
	}
}
double Circle::getArea() const {
	return (PI * pow(getRadius(), 2.0));
}
double Circle::getDiameter() const {
	return (2 * getRadius());
}
double Circle::getCircumference() const {
	return (2 * PI * getRadius());
}
void Circle::display() const {
	cout << "El area del circulo es: " << getArea() << endl;
	cout << "El diametro del circulo es: " << getDiameter() << endl;
	cout << "La circunferencia del circulo es: " << getCircumference() << endl;
}