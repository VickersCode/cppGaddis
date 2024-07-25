/*
Write a program that uses a loop to display the characters for each ASCII code 32 through 127. Display 16 characters on each line with one space between characters.
*/
#include <iostream>
using namespace std;

int main()
{
    char asciiChar;
    int newLine = 0;
    char printI;

    for (int i = 32; i < 128; i++)
    {
        if (newLine == 15)
            {
                cout << "\n";
                newLine = 0;
            }

        printI = i;
        cout << printI << " ";
        newLine += 1;
        
    }

    return 0;
}