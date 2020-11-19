#include <iostream>
using namespace std;
#include "circle.h"

int main() {
	Circle circle1(5.5), circle2;
	double radius;

	circle1.display();
	circle2.display(); // default constructor

	cout << "Entre el radio del circulo: " << endl;
	cin >> radius;

	circle2.setRadius(radius);
	circle2.display();
	system("pause");
	return 0;
}