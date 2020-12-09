#include "MortgagePayment.h"

MortgagePayment::MortgagePayment() {
	setName(" ");
	setAddress(" ");
	setNumSS(0);
	setTelNum(0);

	setLoanAmount(0.0);
	setInterestRate(0.0);
	setYears(0);
}

MortgagePayment::MortgagePayment(string theName, string theAddress, long long theSS, long long theTelNum, double theLoanAmount, double theInterestRate, int theYears) {
	setName(theName);
	setAddress(theAddress);
	setNumSS(theSS);
	setTelNum(theTelNum);

	setLoanAmount(theLoanAmount);
	setInterestRate(theInterestRate);
	setYears(theYears);
}

MortgagePayment::MortgagePayment(const MortgagePayment& obj) {
	name = obj.name;
	address = obj.address;
	numSS = obj.numSS;
	telNum = obj.telNum;
	loanAmount = obj.loanAmount;
	interestRate = obj.interestRate;
	yearsOfLoan = obj.yearsOfLoan;
}

MortgagePayment::~MortgagePayment() {
	cout << "Destroying the object" << endl;
	display();
	system("pause");
}

void MortgagePayment::setContactInfo(string theName, string theAddress, long long theSS, long long theTelNum) {
	setName(theName);
	setAddress(theAddress);
	setNumSS(theSS);
	setTelNum(theTelNum);
}

void MortgagePayment::setPaymentInfo(double theLoanAmount, double theInterestRate, int theYears) {
	setLoanAmount(theLoanAmount);
	setInterestRate(theInterestRate);
	setYears(theYears);
}

void MortgagePayment::setName(string theName) {
	name = theName;
}

void MortgagePayment::setAddress(string theAddress) {
	address = theAddress;
}

void MortgagePayment::setNumSS(long long theSS) {
	numSS = theSS;
}

void MortgagePayment::setTelNum(long long theTelNum) {
	telNum = theTelNum;
}

void MortgagePayment::setLoanAmount(double theLoanAmount) {
	loanAmount = theLoanAmount;
}

void MortgagePayment::setInterestRate(double theInterestRate) {
	interestRate = theInterestRate;
}

void MortgagePayment::setYears(int theYears) {
	yearsOfLoan = theYears;
}

string MortgagePayment::getName() const {
	return name;
}

string MortgagePayment::getAddress() const {
	return address;
}

long long MortgagePayment::getNumSS() const {
	return numSS;
}

long long MortgagePayment::getTelNum() const {
	return telNum;
}

double MortgagePayment::getLoanAmount() const {
	return loanAmount;
}

double MortgagePayment::getInterestRate() const {
	return interestRate / 100;
}

int MortgagePayment::getYears() const {
	return yearsOfLoan;
}

double MortgagePayment::getTerm() const {
	double base = 1 + (getInterestRate() / 12);
	return pow(base, (12 * getYears()));
}

double MortgagePayment::getMonthlyPaymentAmount() const {
	return (getLoanAmount() * (getInterestRate() / 12) * getTerm()) / ((double)getTerm() - 1);
}

double MortgagePayment::getTotalAmountToPay() const {
	return getMonthlyPaymentAmount() * 12 * getYears();
}

void MortgagePayment::display() const {
	cout << "The loan solicitor's name is: " << getName() << endl;
	cout << getName() << "'s address is: " << getAddress() << endl;
	cout << getName() << "'s social security number is: " << getNumSS() << endl;
	cout << getName() << "'s phone number is: " << getTelNum() << endl;
	cout << "The loan amount is: $" << getLoanAmount() << endl;
	cout << "The interest rate is: " << getInterestRate() << endl;
	cout << "The number of years of the loan is: " << getYears() << endl;
	cout << "The term is: " << setprecision(2) << fixed << getTerm() << endl;
	cout << "The monthly payment amount is: $" << setprecision(2) << fixed << getMonthlyPaymentAmount() << endl;
	cout << "The total amount to pay is: $" << setprecision(2) << fixed << getTotalAmountToPay() << endl;
}