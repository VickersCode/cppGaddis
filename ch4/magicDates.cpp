/*
The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year.

                        6/10/60

Write a program that asks the user to enter a month (in numeric form), a day, and a two digit year. The program should then determine whether the month times the day equals the year. If so, it should display a message saying the date is magic. Otherwise, it should display a message saying the date is not magic.
*/

#include <iostream>
using namespace std;

int main(){

    int day,
        month,
        year;

    cout << "Enter the month, in numeric form: \n";
    cin >> month;
    cout << "Enter the day: \n";
    cin >> day;
    cout << "Enter the year in two digit form: \n";
    cin >> year;

    if ((month * day) == year)
    {
        cout << "This is a magic date.";
    }
    else {
        cout << "This is not a magic date.";
    }

    return 0;
}