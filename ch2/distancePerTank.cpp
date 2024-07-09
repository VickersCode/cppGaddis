/*
A car with a 20 gallon gas tank averages 21.5 miles per gallon when driven in town and 36.8 miles per gallon when driven on the highway. Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway.
*/

#include <iostream>
using namespace std;

int main() {

    int TANK_GALLONS = 20;

    float mpgHighway = 36.8 / TANK_GALLONS;
    float mpgTown = 21.5 / TANK_GALLONS;

    cout << "The car gets " << mpgHighway << "mpg highway. \n";
    cout << "and " << mpgTown << "mpg in the town.";

    return 0;
}