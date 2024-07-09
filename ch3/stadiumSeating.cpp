/*
There are three seating categories at a stadium. For a softball game, Class A seats cost $15, class B seats cost $12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in a fixed-point notation with two decimal points and make sure the decimal point is always displayed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int PRICE_A = 15,
              PRICE_B = 12,
              PRICE_C = 9;

    double classA,
           classB,
           classC,
           total;

    cout << "Enter the number of Class A seats sold: ";
    cin >> classA;
    cout << "Enter the number of Class B seats sold: ";
    cin >> classB;
    cout << "Enter the number of Class C seats sold: ";
    cin >> classC;

    total = (classA * PRICE_A) + (classB * PRICE_B) + (classC * PRICE_C);

    cout << fixed << setprecision(2); 
    cout << "Total sales: $" << total;

    return 0;
}

