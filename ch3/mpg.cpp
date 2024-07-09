/*
Write a program that calculates a car's gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank. It should then calculate and display the number of miles per gallon the car gets.
*/

#include <iostream>
using namespace std;

int main() {

    double gallons, 
           miles,
           mpg;

    cout << "Enter the number of gallons the car holds: ";
    cin >> gallons;
    cout << "Enter the number of miles on a full tank: ";
    cin >> miles;

    mpg = miles / gallons;

    cout << "Your car gets " << mpg << " mpg";

    return 0;
}