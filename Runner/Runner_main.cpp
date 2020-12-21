#include "Runner.h"

int main() {
	Runner runner1, runner2, runner3;

	cout << "---For the Runner 1---" << endl; // input for Runner 1
	cin >> runner1;

	if (runner1.getHours() < 0 || runner1.getMinutes() < 0 || runner1.getSeconds() < 0) { // input validation
		cout << "Error. Positive values for the times only! Try again." << endl;
		cin >> runner1;
	}

	cout << "---For the Runner 2---" << endl; // input for Runner 2
	cin >> runner2;

	if (runner2.getHours() < 0 || runner2.getMinutes() < 0 || runner2.getSeconds() < 0) { // input validation
		cout << "Error. Positive values for the times only! Try again." << endl;
		cin >> runner1;
	}

	cout << "---For the Runner 3---" << endl; // input for Runner 3
	cin >> runner3;

	if (runner3.getHours() < 0 || runner3.getMinutes() < 0 || runner3.getSeconds() < 0) { // input validation
		cout << "Error. Positive values for the times only! Try again." << endl;
		cin >> runner3;
	}

	cout << endl;
	cout << "THE RUNNERS ARE: " << endl; // displays information about the runners
	runner1.display();
	runner2.display();
	runner3.display();

	cout << endl;
	cout << "THE RESULTS OF THE RACE ARE: " << endl; // displays the results of the race

	// If Runner 1 is first
	if (runner1 > runner2 && runner1 > runner3 && runner2 > runner3) {
		cout << "First: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
		cout << "Second: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
		cout << "Third: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
	}

	if (runner1 > runner2 && runner1 > runner3 && runner3 > runner2) {
		cout << "First: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
		cout << "Second: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
		cout << "Third: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
	}

	// If Runner 2 is first
	if (runner2 > runner1 && runner2 > runner3 && runner1 > runner3) {
		cout << "First: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
		cout << "Second: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
		cout << "Third: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
	}

	if (runner2 > runner1 && runner2 > runner3 && runner3 > runner1) {
		cout << "First: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
		cout << "Second: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
		cout << "Third: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
	}

	// If Runner 3 is first
	if (runner3 > runner1 && runner3 > runner2 && runner1 > runner2) {
		cout << "First: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
		cout << "Second: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
		cout << "Third: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
	}

	if (runner3 > runner1 && runner3 > runner2 && runner2 > runner1) {
		cout << "First: " << runner3.getName() << " with " << runner3.getConversion() << " seconds." << endl;
		cout << "Second: " << runner2.getName() << " with " << runner2.getConversion() << " seconds." << endl;
		cout << "Third: " << runner1.getName() << " with " << runner1.getConversion() << " seconds." << endl;
	}

	system("pause");
	return 0;
}