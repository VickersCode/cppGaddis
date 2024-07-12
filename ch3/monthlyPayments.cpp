/*
The monthly payment on a loan may be calculated by the follownig formula:

            Payment = [(Rate * (1 + Rate)^N)/((1 + Rate)^N - 1)] * L

Rate is the monthly interest rate, which is the annual interest rate divided by 12. (A 12% annual interest would be 1% monthly). N is the number of payments and L is the amount of the loan. Write a program that asks for these values and displays a report similar to the following.

                        Loan Amount:             $ 10000.00
                        Monthly Interest Rate:            1%
                        Number of Payments:               36
                        Monthly Payment:         $   332.14
                        Amount Paid Back:        $ 11957.15
                        Interest Paid:           $  1957.15
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double loanAmount,
           monthlyInterestRate,
           payments,
           monthlyPayment,
           totalPaid,
           interestPaid;

    cout << "Enter the loan amount: \n$";
    cin >> loanAmount;

    cout << "Enter the monthly interest rate: \n";
    cin >> monthlyInterestRate;

    monthlyInterestRate /= 100;
    monthlyInterestRate /= 12;

    cout << "Enter the number of payments: ";
    cin >> payments;

    monthlyPayment = loanAmount * ((monthlyInterestRate * pow(1 + monthlyInterestRate, payments))/((pow(1 + monthlyInterestRate, payments)) - 1));


    interestPaid = monthlyPayment * 12;
    totalPaid = loanAmount + interestPaid;

    cout << fixed << setprecision(2);
    cout << setw(30) << left << "Loan Amount: " << setw(1) << "$" << setw(9) << right << loanAmount << endl;
    cout << setw(30) << left << "Monthly Interest Rate: " << setw(1) << " " << setw(9) << right << monthlyInterestRate * 100 * 12 << endl;
    cout << setw(30) << left << "Number of Payments: " << setw(1) << " " << setw(9) << right << payments << endl;
    cout << setw(30) << left << "Monthly Payment: " << setw(1) << "$" << setw(9) << right << monthlyPayment << endl;
    cout << setw(30) << left << "Amount Paid Back: " << setw(1) << "$" << setw(9) << right << totalPaid << endl;
    cout << setw(30) << left << "Interest Paid: " << setw(1) << "$" << setw(9) << right << interestPaid << endl;

    return 0;
}