/*
Write a program that asks the user to enter their monthly costs for each of the following housing related expenses:

    - rent or mortgage
    - utilities
    - phones
    - cable

The program should then display the total monthly cost of these expenses, and the total annual cost of those expenses.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double rent,
           utilities,
           phone,
           cable,
           monthlyTotal,
           annualTotal;

    cout << "Enter the monthly cost of rent: ";
    cin >> rent;
    cout << "Enter the monthly cost of utilities: ";
    cin >> utilities;
    cout << "Enter the monthly cost of phone: ";
    cin >> phone;
    cout << "Enter the monthly cost of cable: ";
    cin >> cable;

    monthlyTotal = rent + utilities + phone + cable;
    annualTotal = monthlyTotal * 12;

    cin >> fixed >> setprecision(2);
    cout << "Total monthly cost: $" << monthlyTotal << endl;
    cout << "Total annual cost: $" << annualTotal << endl;


    return 0;
}