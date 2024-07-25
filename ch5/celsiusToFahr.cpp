/*
In one of the Chapter 3 Programming Challenges you were asked to write a program that converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop to display a table of the Celsius temperatures from 0 to 20 and their Fahrenheit equivalents.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    double fTemp,
           cTemp;

    cout << "Celsius    Fahrenheit\n";
    cout << "_____________________\n";

    for (int i = 1; i <= 20; i++)
    {
        cTemp = i;
        fTemp = ((cTemp * 9) / 5) + 32;
        cout << setw(12) << left << cTemp << setw(15) << fTemp << endl;
    }

    

    cout << fixed << setprecision(1);
    cout << "It is " << fTemp << " degrees Fahrenheit";

    return 0;
}