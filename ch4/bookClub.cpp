/*
An online book club awards points to its customers based on the number of books purchased each month. Points are awarded as follows: 

                    Books Purchased         Points
                        0                     0
                        1                     5
                        2                    15
                        3                    30
                    4 or more                60

Write a program that asks the user to enter the number of books purchased this month and then displays the number of points awarded.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {

    unsigned int booksPurchased,
        points;

    cout << "Enter the number of books purchased this month: \n";
    cin >> booksPurchased;

    if (booksPurchased < 0)
    {
        cout << "You entered an invalid number, please run the program again.";
    }
    else
    {
        switch (booksPurchased)
        {
        case 0: points = 0;
            break;
        case 1: points = 5;
            break;
        case 2: points = 15;
            break;
        case 3: points = 30;
            break;
        case 4: points = 60;
            break;
        default: points = 60;
        }

        cout << "You've earned " << points << " points.";
    }

    

    return 0;
}