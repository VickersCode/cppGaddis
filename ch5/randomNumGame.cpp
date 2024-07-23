/*
Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is. If the user's guess is higher than the random number, the program should display "Too High. Try again" or "Too Low. Try Again" if it is too low. The program should use a loop that repeats until the user correctly guesses the random number. Then the program should display "Congratulations. You figured out my number."
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{

    int randNum,
        userNum;

    srand(time(0));
    randNum = rand() % 101;
    
    cout << "Guess a number (1-100):\n";

    while (userNum != randNum)
    {
        cin >> userNum;

        if (userNum < randNum)
            cout << "Too Low. Try Again\n";
        else if (userNum > randNum)
            cout << "Too High. Try Again\n";
    }

    cout << "Congratulations. You figured out my number.";

    return 0;
}