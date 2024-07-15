/*
Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.

Use input validation to make sure no input is out side the range of 1 and 10.
*/

#include <iostream>
using namespace std;

int main() {

    int userNum;
    char romanNum;

    cout << "Enter a number (1-10): \n";
    cin >> userNum;

    if ((userNum < 1) || (userNum > 10)) {
        cout << userNum << " is invalid. Run the program again.";
    }
    else 
    {
        switch (userNum)
        {
            case 1: cout << "I";
                break;
            case 2: cout << "II";
                break;
            case 3: cout << "III";
                break;
            case 4: cout << "IV";
                break;
            case 5: cout << "V";
                break;
            case 6: cout << "VI";
                break;
            case 7: cout << "VII";
                break;
            case 8: cout << "VII";
                break;
            case 9: cout << "IX";
                break;
            case 10: cout << "X";
                break;
        }
    }

    return 0;
}