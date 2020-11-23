#pragma once
// This version of the Sale class uses a default argument
// in the constructor.
#include <iostream>
using namespace std;
#ifndef SALE_H
#define SALE_H

class Sale
{
private:
	double itemCost; // Cost of the item
	double taxRate; // Sales tax rate
public:
	Sale();
	Sale(double cost, double rate);
	void setItemCost(double anItemCost);
	void setTaxRate(double aTaxRate);
	double getItemCost() const;
	double getTaxRate() const;
	double getTax() const;
	double getTotal() const;
	void display() const;
};
#endif