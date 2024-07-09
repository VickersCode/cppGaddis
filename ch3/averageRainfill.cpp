/*
Write a program that calculates the average monthly rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell that month. The program should display a message similar to the following:

The average monthly rainfall for June, July, and August was 6.72 inches.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string month1,
           month2,
           month3;

    double month1Rain,
           month2Rain,
           month3Rain,
           monthAvg;

    cout << "Finding 3-month average \n";
    cout << "Enter the first and the amount of rain (in inches) fallen that month: ";
    cin >> month1 >> month1Rain;
    cout << "Enter the second and the amount of rain (in inches) fallen that month: ";
    cin >> month2 >> month2Rain;
    cout << "Enter the third and the amount of rain (in inches) fallen that month: ";
    cin >> month3 >> month3Rain;

    monthAvg = (month1Rain + month2Rain + month3Rain) / 3;

    cout << fixed << setprecision(2);
    cout << "Your average rainfall for " << month1 << " " << month2 << " and " << month3 << " is: " << monthAvg << " inches"; 

    return 0;
}