// Activity 2.1
// Sum of two fractions without using functions

#include <iostream>
using namespace std;

int main() {
    int* num1 = nullptr, * den1 = nullptr, * num2 = nullptr, * den2 = nullptr, * num3 = nullptr, * den3 = nullptr;
    num1 = new int; // create the dynamic memory
    den1 = new int;
    num2 = new int;
    den2 = new int;
    num3 = new int;
    den3 = new int;

    cout << "Enter the first numerator: "; // num1 / den1
    cin >> *num1;

    cout << "Enter the second numerator: "; // num2 / den2
    cin >> *num2;

    cout << "Enter the first denominator: ";
    cin >> *den1;

    cout << "Enter the second denominator: ";
    cin >> *den2;

    if (*den1 == *den2) { // if same denominator
        *num3 = *num1 + *num2;
        *den3 = *den1;
    }
    else { // if different denominator, use gcd
        *num3 = (*num1) * (*den2) + (*num2) * (*den1);
        *den3 = (*den1) * (*den2);
    }

    cout << "The sum equals to: " << *num3 << "/" << *den3 << endl; // sum of fractions

    delete den1; // liberate the memory
    delete num1;
    delete den2;
    delete num2;
    delete num3;
    delete den3;
    num1 = nullptr;
    den1 = nullptr;
    num2 = nullptr;
    den2 = nullptr;
    num3 = nullptr;
    den3 = nullptr;

    system("pause");
    return 0;
}// end main