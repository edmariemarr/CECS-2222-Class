/* Program asks for the length and width of two rectangles and tells user
which of the two rectangles has the greater area, or if the areas are the same.*/

#include "RectangleArea.h"

int main() {
	RectangleArea rect1, rect2;

	cout << "---For the Rectangle 1---" << endl; // user input for Rectangle 1
	cin >> rect1;

	cout << "---For the Rectangle 2---" << endl; // user input for Rectangle 2
	cin >> rect2;

	if (rect1 == rect2) // if Rectangle 1 is equal to Rectangle 2
		cout << "Both rectangles have the same area." << endl;

	if (rect1 > rect2) // if Rectangle 1 is greater than Rectangle 2
		cout << "Rectangle 1 has a greater area than Rectangle 2." << endl;

	if (rect1 < rect2) // if Rectangle 1 is less than Rectangle 2
		cout << "Rectangle 2 has a greater area than Rectangle 1." << endl;

	if (rect1 != rect2) // if Rectangle 1 is not equal to Rectangle 2
		cout << "Both rectangles have different areas." << endl;
	
	cout << endl;
	cout << "Rectangle 1 = Rectangle 2" << endl;
	rect1 = rect2; // overloaded = operator, assign Rectangle 2 values to Rectangle 1
	cout << "--Rectangle 1--" << endl;
	rect1.display();
	cout << "--Rectangle 2--" << endl;
	rect2.display();

	system("pause");
	return 0;
} // end main

/*
---For the Rectangle 1---
Enter the length:
10.6
Enter the width:
20
---For the Rectangle 2---
Enter the length:
10.6
Enter the width:
20
Both rectangles have the same area.

Rectangle 1 = Rectangle 2
--Rectangle 1--
Length: 10.6
Width: 20
Area: 212
--Rectangle 2--
Length: 10.6
Width: 20
Area: 212
Press any key to continue . . .
*/