#include "sale.h"

int main() {

	Sale circuitBoard(14.95, 0.35);
	double itemCost;
	double taxRate;

	circuitBoard.display();

	cout << "Enter the cost of the item: $" << endl;
	cin >> itemCost;

	cout << "Enter the tax rate: " << endl;
	cin >> taxRate;

	return 0;
}