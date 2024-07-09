/*
Kathryn bought 600 shares of stock at a price of $21.77 per share. A year later she sold them for just $16.44 a share. Write a program that calculates and displays the following:

    - The total amount paid for the stock
    - The total amount received from selling the stock
    - The total amount of money she lost

*/

#include <iostream>
using namespace std;

int main() {

    float amountPaid = 600 * 21.77;
    float amountSold = 600 * 16.44;
    float amountLost = amountPaid - amountSold;

    cout << "Kathryn lost $" << amountLost;

    return 0;
}