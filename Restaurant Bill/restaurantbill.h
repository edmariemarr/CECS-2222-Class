#include <iostream>
using namespace std;
#ifndef RESTAURANTBILL_H
#define RESTAURANTBILL_H

class RestaurantBill
{
private:
	double mealCost;
	double taxValue;
	double tipValue;
public:
	RestaurantBill();
	RestaurantBill(double cost, double tax, double tip);
	void setMealCost(double theMealCost);
	void setTaxValue(double theTax);
	void setTipValue(double theTip);
	double getMealCost() const;
	double getTaxValue() const;
	double getTipValue() const;
	double getTax() const;
	double getTip() const;
	double getTotal() const;
	void display() const;
};
#endif
