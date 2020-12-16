#pragma once
#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <iostream>
using namespace std;

class NumberArray {
private:
	float *array;
	int size;

public:
	NumberArray();
	NumberArray(int sizeArray);
	NumberArray(const NumberArray& obj);
	~NumberArray();
	void setNum(float theArray);
	void setSize(int sizeArray);
	float getNum() const;
	int getSize() const;
	float highestValue() const;
	float lowestValue() const;
	float averageNum() const;
	void display() const;
}; 
#endif