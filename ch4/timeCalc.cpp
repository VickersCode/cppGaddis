/*
Write a program that asks a user to enter a number of seconds.

- There are 86,400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86,400, the program should dispay the number of days in that many seconds.
- There are 3600 seconds in an hour. If the number of seconds entered by the user is less than 86,400, and greater or equal to 3,600, the program shuld display the number of hours in that many seconds.
- Likewise, use the same logic for minutes.
*/

#include <iostream>
using namespace std;

int main() {

    int seconds,
        secRemainder,
        secConversion;

    cout << "Enter a number of seconds: \n";
    cin >> seconds;

    if (seconds >= 86400)
    {
        secConversion = seconds / 86400;
        secRemainder = seconds % 86400;
        cout << seconds << " seconds is " << secConversion << " days and " << secRemainder << " seconds.\n";
    }
    else if ((seconds < 86400) && (seconds >= 3600))
    {
        secConversion = seconds / 3600;
        secRemainder = seconds % 3600;
        cout << seconds << " seconds is " << secConversion << " hours and " << secRemainder << " seconds.\n";
    }
    else if ((seconds < 3600) && (seconds >= 60))
    {
        secConversion = seconds / 60;
        secRemainder = seconds % 60;
        cout << seconds << " seconds is " << secConversion << " minutes and " << secRemainder << " seconds.\n";
    }
    else
        cout << "Cannot convert.";

    return 0;
}