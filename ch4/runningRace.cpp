/*
Write a program that asks for the names of three runners and the time it took each of them to finish a race. The program should display who came in first, second, and thrid place. Think about how many test cases are needed to verify that your program works correctly. (That is, how many different finish orders are possible?)

Only accept positive numbers.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string racer1,
           racer2,
           racer3;

    double time1,
           time2,
           time3;

    cout << "Enter the names of the three runners: \n";
    cin >> racer1 >> racer2 >> racer3;

    cout << "Enter the race time for " << racer1;
    cin >> time1;

    cout << "Enter the race time for " << racer2;
    cin >> time2;

    cout << "Enter the race time for " << racer3;
    cin >> time3;

    if ((time1 > 0) && (time2 > 0) && (time3 > 0))
    {
        if ((time1 > time2) && (time2 > time3))
        {
            cout << "1: " << racer1 << endl;
            cout << "2: " << racer2 << endl;
            cout << "3: " << racer3 << endl;
        }
        else if ((time1 > time3) && (time3 > time2))
        {
            cout << "1: " << racer1 << endl;
            cout << "2: " << racer3 << endl;
            cout << "3: " << racer2 << endl;
        }
        else if ((time2 > time1) && (time1 > time3))
        {
            cout << "1: " << racer2 << endl;
            cout << "2: " << racer1 << endl;
            cout << "3: " << racer3 << endl;
        }
        else if ((time2 > time3) && (time3 > time1))
        {
            cout << "1: " << racer2 << endl;
            cout << "2: " << racer3 << endl;
            cout << "3: " << racer1 << endl;
        }
        else if ((time3 > time1) && (time1 > time2))
        {
            cout << "1: " << racer3 << endl;
            cout << "2: " << racer1 << endl;
            cout << "3: " << racer2 << endl;
        }
        else if ((time3 > time2) && (time2 > time1))
        {
            cout << "1: " << racer3 << endl;
            cout << "2: " << racer2 << endl;
            cout << "3: " << racer1 << endl;
        }
    }
    else
        cout << "You entered an invalid number. Run the program again";

    return 0;
}