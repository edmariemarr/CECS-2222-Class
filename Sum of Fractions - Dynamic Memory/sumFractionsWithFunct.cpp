// Activity 2.1
// Sum of two fractions using functions

#include <iostream>
using namespace std;

int* getNum();
int* getDen();
void* getSum(int* num1, int* den1, int* num2, int* den2, int* num3, int* den3);
void display(int* num, int* den);

int main() {
    int* num1 = nullptr, * den1 = nullptr, * num2 = nullptr, * den2 = nullptr, * num3 = nullptr, * den3 = nullptr;
    num1 = new int; // create dynamic memory
    den1 = new int;
    num2 = new int;
    den2 = new int;
    num3 = new int;
    den3 = new int;
    num1 = getNum();
    num2 = getNum();
    den1 = getDen();
    den2 = getDen();
    getSum(num1, den1, num2, den2, num3, den3);
    getSum(num1, den1, num2, den2, num3, den3);
    display(num3, den3);
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

int* getNum() {
    int* num;
    num = new int;
    cout << "Enter the numerators: ";
    cin >> *num;
    return num;
}

int* getDen() {
    int* den;
    den = new int;
    cout << "Enter the denominators: ";
    cin >> *den;
    return den;
}

void* getSum(int* num1, int* den1, int* num2, int* den2, int* num3, int* den3) {
    if (*den1 == *den2) { // if same denominator
        *num3 = *num1 + *num2;
        *den3 = *den1;
    }
    else { // if different denominator, use gcd
        *num3 = (*num1) * (*den2) + (*num2) * (*den1);
        *den3 = (*den1) * (*den2);
    }
    return num3, den3;
}

void display(int* num, int* den) {
    cout << "The sum equals to: " << *num << "/" << *den << endl;
}