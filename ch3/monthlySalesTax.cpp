/*
A retail company must file a monthly sdales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (that is, sales plus sales tax). Assume the state sales tax is 4% and the county sales tax is 2%.

If the total amount collected is known and the total sales tax is 6%, the amount of product sales may be calculated as 

                        S = T/1.06

        Where S is the product sales tax 
        and   T is the total income (product plus sales tax).
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string date;

    const double COUNTY_TAX = 0.02,
                 STATE_TAX = 0.04;

    double totalCollected,
           sales,
           countyTax,
           stateTax,
           totalTax;

    cout << "Enter the month and year: \n";
    getline(cin, date);

    cout << "Enter the total amount collected: \n";
    cin >> totalCollected;

    totalTax = (totalCollected * ( STATE_TAX + COUNTY_TAX));
    sales = totalCollected - totalTax;
    stateTax = sales * STATE_TAX;
    countyTax = sales * COUNTY_TAX;

    cout << "Month: " << date << endl;
    cout << "---------------------\n";
    cout << fixed << setprecision(2);
    cout << setw(20) << left << "Total Collected:" << setw(1) << "$" <<  setw(10) << right << totalCollected << endl;
    cout << setw(20) << left << "Sales:" << setw(1) << "$" <<  setw(10) << right << sales << endl;
    cout << setw(20) << left << "County Sales Tax:" << setw(1) << "$" <<  setw(10) << right << countyTax << endl;
    cout << setw(20) << left << "State Sales Tax:" << setw(1) << "$" <<  setw(10) << right << stateTax << endl;
    cout << setw(20) << left << "Total Sales Tax:" << setw(1) << "$" <<  setw(10) << right << totalTax << endl;


    return 0;
}