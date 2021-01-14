#include "MovieProfit.h"

MovieProfit::MovieProfit() {
	char tempTitle[20] = " ";
	char tempDirector[20] = " ";
	releaseYear = 0;
	runningTime = 0;
	cost = 0;
	revenue = 0;
}

MovieProfit::MovieProfit(char *theTitle, char *theDirector, int theYear, int theTime, float theCost, float theRevenue) {
	setTitle(theTitle);
	setDirector(theDirector);
	setReleaseYear(theYear);
	setRunningTime(theTime);
	setProductionCosts(theCost);
	setRevenue(theRevenue);
}

MovieProfit::MovieProfit(const MovieProfit& theProfit) {
	setTitle(theProfit.getTitle());
	setDirector(theProfit.getDirector());
	setReleaseYear(theProfit.getReleaseYear());
	setRunningTime(theProfit.getRunningTime());
	setProductionCosts(theProfit.getProductionCosts());
	setRevenue(theProfit.getRevenue());
}

MovieProfit::~MovieProfit() {
	delete[] title;
	delete[] director;
}

void MovieProfit::setTitle(char *theTitle) {
	title = new char[strlen(theTitle) + 1];
	strcpy_s(title, strlen(theTitle) + 1, theTitle);
}

void MovieProfit::setDirector(char *theDirector) {
	director = new char[strlen(theDirector) + 1];
	strcpy_s(director, strlen(theDirector) + 1, theDirector);
}

void MovieProfit::setReleaseYear(int theYear) {
	releaseYear = theYear;
}

void MovieProfit::setRunningTime(int theTime) {
	runningTime = theTime;
}

void MovieProfit::setProductionCosts(float theCost) {
	cost = theCost;
}

void MovieProfit::setRevenue(float theRevenue) {
	revenue = theRevenue;
}

char *MovieProfit::getTitle() const {
	return title;
}

char *MovieProfit::getDirector() const {
	return director;
}

int MovieProfit::getReleaseYear() const {
	return releaseYear;
}

int MovieProfit::getRunningTime() const {
	return runningTime;
}

float MovieProfit::getProductionCosts() const {
	return cost;
}

float MovieProfit::getRevenue() const {
	return revenue;
}

float MovieProfit::getProfit() const {
	return getRevenue() - getProductionCosts();
}

void MovieProfit::display() const {
	cout << "Movie Title: " << getTitle() << endl;
	cout << "Movie Director: " << getDirector() << endl;
	cout << "Release Year: " << getReleaseYear() << endl;
	cout << "Running Time: " << getRunningTime() << " minutes" << endl;
	cout << "Production Costs: $" << setprecision(2) << fixed << getProductionCosts() << endl;
	cout << "Revenue: $" << setprecision(2) << fixed << getRevenue() << endl;
	cout << "Profit or Loss Calculated: $" << setprecision(2) << fixed << getProfit() << endl;
}

ostream& operator << (ostream& strm, const MovieProfit& obj) {
	strm << "Title: " << obj.getTitle() << endl;
	strm << "Director: " << obj.getDirector() << endl;
	strm << "Release Year: " << obj.getReleaseYear() << endl;
	strm << "Running Time: " << obj.getRunningTime() << endl;
	strm << "Production Cost: " << obj.getProductionCosts() << endl;
	strm << "Revenue: " << obj.getRevenue() << endl;
	strm << "Profit or Loss: " << obj.getProfit() << endl;
	return strm;
}

istream& operator >> (istream& strm, MovieProfit& obj) {
	//cout << "Enter the movie title: " << endl;
	//strm >> obj.title;
	//cout << "Enter the movie director: " << endl;
	//strm >> obj.director;
	cout << "Enter the release year: " << endl;
	strm >> obj.releaseYear;
	cout << "Enter the running time (in minutes): " << endl;
	strm >> obj.runningTime;
	cout << "Enter the production cost: $" << endl;
	strm >> obj.cost;
	cout << "Enter the revenue: $" << endl;
	strm >> obj.revenue;
	return strm;
}

void MovieProfit::operator = (const MovieProfit& obj) {
	delete[] title;
	title = new char[strlen(obj.getTitle()) + 1];
	strcpy_s(title, strlen(obj.getTitle()) + 1, obj.getTitle());
	delete[] director;
	director = new char[strlen(obj.getDirector()) + 1];
	strcpy_s(director, strlen(obj.getDirector()) + 1, obj.getDirector());
}
