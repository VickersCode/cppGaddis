/*
Assuming the level of the Earth's oceans continues rising at about 3.1 milimeters per year, write a program that displays a table showing the total number of milimeters the oceans will have risen each year for the next 25 years.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const double MM_PER_YEAR = 3.1;
    double seaLevel;


    cout << "Year   Sea Levels\n";
    cout << "_________________\n";

    for (int i = 1; i <= 25; i++)
    {
        seaLevel = i * MM_PER_YEAR;
        cout << setw(7) << left << i << seaLevel << endl;
    }

    return 0;
}