/*
A software company sells a package that retails at $99. Quantity discounts are given according to the following table.


                Quantity        Discount
                10 - 19         20%
                20 - 49         30%
                50 - 99         40%
                100 or more     50%

Write a program that asks for the number of units purchased and computes the total cost of the purchase.

Make sure the number of units is greater than 0.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int quantity;
    double discount,
           total;

    cout << "Enter the number of packages bought: \n";
    cin >> quantity;

    if (quantity > 0)
    {
        if (quantity < 10)
            discount = 0;
        else if ((quantity >= 10) && (quantity < 20))
            discount = 0.2;
        else if ((quantity >= 20) && (quantity < 50))
            discount = 0.3;
        else if ((quantity >= 50) && (quantity < 100))
            discount = 0.4;
        else
            discount = 0.5;

        total = quantity * 99;
        total -= (quantity * discount);

        cout << fixed << setprecision(2);
        cout << "Your total is $" << total;

    }
    else
        cout << "You entered an invalid number. Please run the program again.";

       

    return 0;
}