/*
An electronics company sells circuit boards at a 40% profit. Write a program that calculates the selling price of a circuit board that costs them $12.67 to produce. Display the result.
*/

#include <iostream>
using namespace std;

int main() {
    float boardCost = 12.67;
    float PROFIT_PERCENTAGE = 0.4;

    float profit = boardCost * PROFIT_PERCENTAGE;

    float total = boardCost + PROFIT_PERCENTAGE;

    cout << "The total selling price is: $" << total;

    return 0;
}