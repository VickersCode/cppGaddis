/*
Madison County collects property taxes on the assessed value of property, which is 60% of its actual value. For example, if a house is valued at $158,000 its assessed value is $94,800. This is the amount the homeowner pays tax on. At last year's tax rate of $2.64 for each $100 of assessed value, the annual property tax for this house would be $2502.72. Write a program that asks the user to input the actual value of a piece of property and the current tax rate for each $100 of asessed value. The program should then calculate and report how much annual property tax the homeowner will be charged for this property.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double taxRate,
           assessVal,
           propertyTax;

    cout << "Enter the assessed value: \n$";
    cin >> assessVal;
    cout << "Enter the tax rate (per $100): \n$";
    cin >> taxRate;

    propertyTax = (assessVal * 0.6)/100 * taxRate;

    cout << fixed << setprecision(2);
    cout << "Your property tax is : $" << propertyTax;


    return 0;
}