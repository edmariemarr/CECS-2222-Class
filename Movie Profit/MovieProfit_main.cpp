#include "MovieProfit.h"

int main() {
	MovieProfit movie;

	cout << "--- Input the following information about your favorite movie ---" << endl;

	char* title = nullptr;
	char* director = nullptr;
	const int SIZE = 20;
	title = new char[SIZE];
	director = new char[SIZE];
	cout << "Enter the movie title: " << endl;
	cin.getline(title, SIZE);

	cout << "Enter the movie director: " << endl;
	cin.getline(director, SIZE);

	movie.setTitle(title);
	movie.setDirector(director);
	delete[] title;
	title = nullptr;
	delete[] director;
	director = nullptr;

	cin >> movie;

	if (movie.getProductionCosts() < 0 || movie.getRevenue() < 0) { // input validation
		cout << "Must be positive values. Please try again." << endl;
		cin >> movie;
	}

	cout << endl;
	cout << "--- FAVORITE MOVIE DATA ---" << endl;
	movie.display();

	cout << endl;
	cout << "--- COPY CONSTRUCTOR ---" << endl;
	MovieProfit movie2(movie);
	movie2.display();

	system("pause");
	return 0;
}