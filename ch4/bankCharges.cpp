/*
A bank charges $10 per month plus the following check fees for a commercial checking account:

                $0.10 each for fewer than 20 checks
                $0.08 each for 20-39 checks
                $0.06 each for 40-59 checks
                $0.04 each for 60+ checks

Write a program that asks for the number of checks written during the past month, then computes and displays the bank's fees for the month. Do not accept a negative number.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double total = 10,
           fees;
    int numChecks;

    cout << "Enter the number of checks written this month: \n";
    cin >> numChecks;

    if (numChecks < 0)
        cout << "Invalid number, please try again.";
    else
    {
        if (numChecks < 20)
            fees = numChecks * 0.2;
        else if ((numChecks >= 20) || (numChecks < 40))
            fees = numChecks * 0.3;
        else if ((numChecks >= 40) || (numChecks < 60))
            fees = numChecks * 0.4;
        else 
            fees = 0.6;

        total += fees;

        cout << fixed << setprecision(2);
        cout << "You're total is $" << total;
    }
    

    return 0;
}