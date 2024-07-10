/*
Wrie a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is

F = (9/5)C + 32

The program should prompt the user to input a celsius temperature and should display the corresponding fahrenheit temperature.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double fTemp,
           cTemp;

    cout << "Write the temperature in celcius: \n";
    cin >> cTemp;

    fTemp = ((cTemp * 9) / 5) + 32;

    cout << fixed << setprecision(1);
    cout << "It is " << fTemp << " degrees Fahrenheit";

    return 0;
}