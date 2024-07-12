/*
Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as 

                        Amount = Principal * (1 + Rate/T)^T

where Principal is the balance in the account, Rate is the annual interest rate, and T is the number of times the interest is compunded during a year. (e.g., T is 4 if the interest is compounded quarterly.)

Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to the following:

                Interest Rate:           4.25%
                Times Compounded:          12
                Principal:          $ 1000.00
                Interest:           $   43.33
                Final Balance:      $ 1043.33

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double principle,
           interestRate,
           interest,
           finalBalance;

    double timesCompounded;

    cout << "Enter the principal amound: \n$";
    cin >> principle;
    cout << "Enter the interest rate: \n$";
    cin >> interestRate;
    cout << "Enter compounds per year: \n";
    cin >> timesCompounded;

    interestRate /= 100;

    finalBalance = principle * pow(1 + interestRate/timesCompounded, timesCompounded);
    
    interest = finalBalance - principle;

    cout << fixed << setprecision(2);
    cout << setw(25) << left << "Interest Rate: " << setw(9) << right << interestRate*100 << setw(1) << "%" << endl;
    cout << setw(25) << left << "Times Compounded: " << setw(9) << right << timesCompounded << endl;
    cout << setw(25) << left << "Principal: " << setw(1) << "$" << setw(8) << right << principle << endl;
    cout << setw(25) << left << "Interest: " << setw(1) << "$" << setw(8) << right << interest << endl;
    cout << setw(25) << left << "Final Balance: " << setw(1) << "$" << setw(8) << right << finalBalance;

    return 0;
}