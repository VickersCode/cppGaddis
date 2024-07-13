/*
Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:

        A) Ask the user for the diameter of the pizza in inches.
        B) Calculate the number of slices that may be taken from a pizza of that size if each slice has an area of 14.125 inches.
        C) Display a message telling the number of slices.

The number of square inches in the total pizza can be calculated with this formula:

                      Area = pi*r^2

In your program, make PI a named constant. Display the number of slices as a whole number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const double PI = 3.14,
                 PER_SLICE = 14.125;

    double diameter,
           area;
           
    int slices;

    cout << "Please enter the diameter of the pizza: \n";
    cin >> diameter;

    area = PI * pow(diameter, 2);
    slices = area / PER_SLICE;

    cout << "Slices: " << slices;

    return 0;
}