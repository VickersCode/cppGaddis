/*
The Yukon Widget Company manufactures widgets that weigh 9.2 lbs each. Write a program that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet. the program should ask the user how much the pallet weighs by itself and with the widgets stacked on it. Itshould then calculate and display the number of widgets stacked on the pallet.
*/

#include <iostream>
using namespace std;

int main() {

    const double WIDGET_WEIGHT = 9.2;

    double palletWeight,
           totalWeight;

    int widgets;

    cout << "How much does the pallet weigh? \n";
    cin >> palletWeight;
    cout << "Total weight: \n";
    cin >> totalWeight;

    widgets = (totalWeight - palletWeight) / WIDGET_WEIGHT;

    cout << "You have " << widgets << " widgets.";

    return 0;
}