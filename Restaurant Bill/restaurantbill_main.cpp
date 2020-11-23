/* RESTAURANT BILL PAGE 80 CAP 2
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
*/

#include "restaurantbill.h"

int main() {
	
	RestaurantBill meal(88.67, 0.0675, 0.20); // meal cost, tax value, tip value

	cout << "----RESTAURANT BILL----" << endl; // header before output
	meal.display();

	system("pause");
	return 0;
}