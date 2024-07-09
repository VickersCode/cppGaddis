/*
Many financial experts advise property owners to insure their homes or buildings for at least 80% of the amount it would cost to replace the structure. Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance that should be purchased for the property.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double LOAN_ADJUSTMENT = 0.8,
       cost,
       insurance;

    cout << "What is the cost to replace the home?";
    cin >> cost;

    insurance = cost * LOAN_ADJUSTMENT;

    cout << fixed << setprecision(2);
    cout << "We advise insuring your home at $" << insurance;

    return 0;
}