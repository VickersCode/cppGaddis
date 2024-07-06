/*
A car holds 16 gallons of gas and can travel 350 miles before refueling. write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
*/

#include <iostream>
using namespace std;

int main() {
    int GALLONS = 16;
    int DISTANCE = 350;

    float mpg = DISTANCE / GALLONS;

    cout << "This car gets " << mpg << " mpg.";

    return 0;
}