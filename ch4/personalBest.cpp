/*
Write a program that asks for the name of a pole vaulter and the dates and vault heights (in meters) of the athlete's three best vaults. It should then report in height order (best first), the date on which each vault was made, and its height.

Only accept values between 2.0 and 5.0
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string vaulterName,
           date1,
           date2,
           date3;
    
    double height1,
           height2,
           height3;

    cout << "Enter the date and height of the first jump:\n";
    cin >> date1 >> height1;
    cout << "Enter the date and height of the second jump:\n";
    cin >> date2 >> height2;
    cout << "Enter the date and height of the third jump:\n";
    cin >> date3 >> height3;
    
    if ((height1 < 2.0) || (height1 > 5.0) || (height2 < 2.0) || (height2 > 5.0) || (height3 < 2.0) || (height3 > 5.0))
        cout << "You entered an invalid height. Please run the program again.";
    else
    {
        if ((height1 > height2) && (height2 > height3))
        {
            cout << "1. " << date1 << ": " << height1 << endl;
            cout << "2. " << date2 << ": " << height2 << endl;
            cout << "3. " << date3 << ": " << height3 << endl;
        }
        else if ((height1 > height3) && (height3 > height2))
        {
            cout << "1. " << date1 << ": " << height1 << endl;
            cout << "2. " << date3 << ": " << height3 << endl;
            cout << "3. " << date2 << ": " << height2 << endl;
        }
        else if ((height2 > height1) && (height1 > height3))
        {
            cout << "1. " << date2 << ": " << height2 << endl;
            cout << "2. " << date1 << ": " << height1 << endl;
            cout << "3. " << date3 << ": " << height3 << endl;
        }
        else if ((height2 > height3) && (height3 > height1))
        {
            cout << "1. " << date2 << ": " << height2 << endl;
            cout << "2. " << date3 << ": " << height3 << endl;
            cout << "3. " << date1 << ": " << height1 << endl;
        }
        else if ((height3 > height1) && (height1 > height2))
        {
            cout << "1. " << date3 << ": " << height3 << endl;
            cout << "2. " << date1 << ": " << height1 << endl;
            cout << "3. " << date2 << ": " << height2 << endl;
        }
        else if ((height3 > height2) && (height2 > height1))
        {
            cout << "1. " << date3 << ": " << height3 << endl;
            cout << "2. " << date2 << ": " << height2 << endl;
            cout << "3. " << date1 << ": " << height1 << endl;
        }
    }

    return 0;
}