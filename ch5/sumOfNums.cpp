/*
Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered.

Do not accept an integer less than 1.
*/

#include <iostream>
using namespace std;

int main() 
{

    unsigned int userNum, 
                 finalNum = 0;

    cout << "Enter a positive integer: \n";
    cin >> userNum;

    for (int i = 1; i <= userNum; i++)
    {
        finalNum += i;
    }

    cout << "Final number: " << finalNum;

    return 0;
}