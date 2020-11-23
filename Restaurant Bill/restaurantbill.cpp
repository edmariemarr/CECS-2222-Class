#include "restaurantbill.h"

RestaurantBill::RestaurantBill() {
	mealCost = 0.0;
	taxValue = 0.0;
	tipValue = 0.0;
}

RestaurantBill::RestaurantBill(double cost, double tax, double tip) {
	mealCost = cost;
	taxValue = tax;
	tipValue = tip;
}

void RestaurantBill::setMealCost(double theMealCost) {
	mealCost = theMealCost;
}

void RestaurantBill::setTaxValue(double theTax) {
	taxValue = theTax;
}

void RestaurantBill::setTipValue(double theTip) {
	tipValue = theTip;
}

double RestaurantBill::getMealCost() const {
	return mealCost;
}

double RestaurantBill::getTaxValue() const {
	return taxValue;
}

double RestaurantBill::getTipValue() const {
	return tipValue;
}

double RestaurantBill::getTax() const {
	return (getTaxValue() * getMealCost());
}

double RestaurantBill::getTip() const {
	return (getTipValue() * (getMealCost() + getTax()));
}

double RestaurantBill::getTotal() const {
	return (getMealCost() + getTax() + getTip());
}

void RestaurantBill::display() const {
	cout << "The meal cost is: $" << getMealCost() << endl;
	cout << "The tax calculated is: $" << getTax() << endl;
	cout << "The tip calculated is: $" << getTip() << endl;
	cout << "The total of the bill is: $" << getTotal() << endl;
}