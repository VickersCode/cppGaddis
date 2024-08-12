/*
Write an enhanced version of prob10 that keeps track of number of guesses and displays when correct.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{

    int randNum,
        count=0,
        userNum;

    srand(time(0));
    randNum = rand() % 101;
    
    cout << "Guess a number (1-100):\n";

    while (userNum != randNum)
    {
        count += 1;
        cin >> userNum;

        if (userNum < randNum)
            cout << "Too Low. Try Again\n";
        else if (userNum > randNum)
            cout << "Too High. Try Again\n";
    }

    cout << "Congratulations. You figured out my number.\n";
    cout << "It took " << count << " guesses.";

    return 0;
}