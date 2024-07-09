/*
Write a program that computes the tax and tip on a restauraunt bill for a patron with a $44.50 meal charge. The tax should be 6.75% percent of the meal cost. The tip should be 15% of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.
*/


#include <iostream>
using namespace std;

int main() {
    float TAX = 0.0675;
    float TIP = 0.15;
    float meal = 44.5;

    float mealTax = meal * TAX;
    float mealAndTax = meal + mealTax;
    

    float tip = mealAndTax * TIP;
    float total = mealAndTax + tip;

    cout << "===================\n";
    cout << "Meal: $" << meal << "\n";
    cout << "Tax: $" << mealTax << "\n";
    cout << "Tip: $" << tip << "\n";
    cout << "Total: $" << total;
    

    return 0;
}