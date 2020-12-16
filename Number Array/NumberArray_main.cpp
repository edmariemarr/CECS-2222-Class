#include "NumberArray.h"

int main() {

	int size = 0;
	cout << "Input the size of the array: " << endl;
	cin >> size;

	while (size < 0) {
		cout << "Invalid input. Enter a positive value." << endl;
		cin >> size;
	}

	NumberArray array1(size);
	array1.setNum(size);
	array1.display();

	// Copy constructor
	cout << endl;
	cout << "Copy Constructor: " << endl;
	NumberArray array2(array1);
	array2.display();

	system("pause");
	return 0;
}