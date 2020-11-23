#include "sale.h"

Sale::Sale() {
	itemCost = 0.0;
	taxRate = 0.0;
}

Sale::Sale(double cost, double rate)
{
	itemCost = cost;
	taxRate = rate;
}

void Sale::setItemCost(double anItemCost) 
{
	itemCost = anItemCost;
}

void Sale::setTaxRate(double aTaxRate) 
{
	taxRate = aTaxRate;
}

double Sale::getItemCost() const
{
	return itemCost;
}

double Sale::getTaxRate() const
{
	return taxRate;
}

double Sale::getTax() const
{
	return (itemCost * taxRate);
}

double Sale::getTotal() const
{
	return (itemCost + getTax());
}

void Sale::display() const 
{
	cout << "The item cost is: $" << getItemCost() << endl;
	cout << "The tax rate is: " << getTaxRate() << endl;
	cout << "The tax is: $" << getTax() << endl;
	cout << "The total is: $" << getTotal() << endl;
}