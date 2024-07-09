/*
Write a program that computes the total sales tax on a $52 purchase. Assume the state sales tax is 4% and the county sales tax is 2%. Display the purchase price, state tax, county tax, and total tax amounts to the screen.
*/

#include <iostream>
using namespace std;

int main() {
    float STATE_TAX = 0.04;
    float COUNTY_TAX = 0.02;

    int purchase = 52;

    float stateTax = purchase * STATE_TAX;
    float countyTax = purchase * COUNTY_TAX;
    float total = purchase + countyTax + stateTax;

    cout << "State Tax: $" << stateTax << "\n";
    cout << "County Tax: $" << countyTax << "\n";
    cout << "Total: $" << total;

    return 0;
}