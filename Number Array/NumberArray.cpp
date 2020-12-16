#include "NumberArray.h"

NumberArray::NumberArray() {
	array = NULL;
	size = 0;
}

NumberArray::NumberArray(int sizeArray) {
	array = new float[sizeArray];
	size = sizeArray;
}

NumberArray::NumberArray(const NumberArray& obj) {
	array = obj.array;
	size = obj.size;
}

NumberArray::~NumberArray() {
	delete[] array;
}

void NumberArray::setNum(float theArray) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the #" << i + 1 << " value of the array: " << endl;
		cin >> theArray;
		array[i] = theArray;
	}
}

void NumberArray::setSize(int sizeArray) {
	size = sizeArray;
}

float NumberArray::getNum() const {
	return array[size];
}

int NumberArray::getSize() const {
	return size;
}

float NumberArray::highestValue() const {
	float max = array[0];
	for (int i = 1; i < size; i++) {
		if (max < array[i])
			max = array[i];
	}
	return max;
}

float NumberArray::lowestValue() const {
	float min = array[0];
	for (int i = 1; i < size; i++) {
		if (min > array[i])
			min = array[i];
	}
	return min;
}

float NumberArray::averageNum() const {
	float sum = 0, average;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	average = sum / (float)size;
	return average;
}

void NumberArray::display() const {

	cout << "The lowest value is: " << lowestValue() << endl;
	cout << "The highest value is: " << highestValue() << endl;
	cout << "The average is: " << averageNum() << endl;
} 

