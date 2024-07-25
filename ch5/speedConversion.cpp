/*
Write a program that displays a table of speeds in kilometers per hour with their values converted to miles per hour. The table should display the speeds from 60 kilometers per hour through 130 kilometers per hour, in increments of 5 kilometers per hour.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double mph,
           kph;

    cout << "KPH        MPH\n";
    cout << "______________\n";

    for (int i = 60; i <= 130; i += 5)
    {
        mph = i * 0.6214;
        cout << setw(8) << left << i << mph << endl;
    }

    return 0;
}