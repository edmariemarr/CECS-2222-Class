#ifndef MORTGAGEPAYMENT_H
#define MORTGAGEPAYMENT_H
#include<iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

class MortgagePayment {
private:
	string name, address; // name and address for contact information
	long long numSS, telNum; // social security number and telephone number for contact information
	double loanAmount, interestRate; // loan amount and interest rate for loan payment calculation
	int yearsOfLoan; // years of loan for loan payment calculation

public:
	MortgagePayment(); // default constructor
	MortgagePayment(string theName, string theAddress, long long theSS, long long theTelNum, double theLoanAmount, double theInterestRate, int theYears); // constructor
	MortgagePayment(const MortgagePayment& obj); // copy constructor
	~MortgagePayment(); // destructor
	void setContactInfo(string theName, string theAddress, long long theSS, long long theTelNum); // sets all the contact info
	void setPaymentInfo(double theLoanAmount, double theInterestRate, int theYears); // sets all the payment info
	void setName(string theName);
	void setAddress(string theAddress);
	void setNumSS(long long theSS);
	void setTelNum(long long theTelNum);
	void setLoanAmount(double theLoanAmount);
	void setInterestRate(double theInterestRate);
	void setYears(int theYears);
	string getName() const;
	string getAddress() const;
	long long getNumSS() const;
	long long getTelNum() const;
	double getLoanAmount() const;
	double getInterestRate() const;
	int getYears() const;
	double getTerm() const; // returns the loan term
	double getMonthlyPaymentAmount() const; // returns the monthly payment amount
	double getTotalAmountToPay() const; // returns the total amount paid to the bank at the end of the loan period
	void display() const; // displays information
};
#endif
