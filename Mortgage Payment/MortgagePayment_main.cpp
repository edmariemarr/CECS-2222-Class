#include "MortgagePayment.h"

int main() {
    MortgagePayment user1;

    string name, address;
    long long numSS, telNum;
    int years;
    double rate = 0.0, amount = 0.0;

    // Begin contact information input

    cout << "What is the name of the loan solicitor?" << endl;
    getline(cin, name);

    cout << "What is their address?" << endl;
    getline(cin, address);

    cout << "What is their social security number?" << endl;
    cin >> numSS;

    cout << "What is their phone number?" << endl;
    cin >> telNum;

    user1.setContactInfo(name, address, numSS, telNum);

    // Begin payment information input

    cout << "Input the loan amount:" << endl;
    cin >> amount;

    if (amount <= 0) {
        cout << "Error. Input a positive value larger than 0." << endl;
        cin >> amount;
    }

    cout << "Input the loan interest rate in percentage:" << endl;
    cin >> rate;

    cout << "Input the number of years of the loan:" << endl;
    cin >> years;

    if (years <= 0) {
        cout << "Error. Input a positive value larger than 0." << endl;
        cin >> years;
    }

    user1.setPaymentInfo(amount, rate, years);

    cout << endl; // empty space between input and display of information
    cout << "Contact and loan payment information:" << endl;
    cout << "-------------------------------------" << endl;
    user1.display();

    // Here we use the copy constructor
    cout << "--- This is the copy constructor ---" << endl;
    cout << "-------------------------------------" << endl;
    MortgagePayment user2(user1);
    user2.display();
 
    system("pause");
    return 0;

} // end main