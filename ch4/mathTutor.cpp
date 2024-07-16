/*
This is a modification of the math tutor problem in Ch. 3. Write a program that can be used as a math tutor for a young student. The program should display two random numbers between 10 and 50 that are to be added such as

                                    24
                                  + 12
                                  ____

The program should then wait for the student to enter the answer. If the answer is correct, a message of congratulations should be printed. If the answer is incorrect, a message should be printed showing the correct answer.                                  
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    unsigned seed = time(0);
    srand(seed);

    int num1 = 10 + rand() % 50,
        num2 = 10 + rand() % 50,
        userNum,
        corrNum;

    cout << right << setw(4) << num1 << endl;
    cout << left << setw(1) << "+" << setw(3) << right << num2 << endl;
    cout << "___\n";

    cin >> userNum;

    corrNum = num1 + num2;

    if (userNum == corrNum)
        cout << "Congratulations.";
    else
    {
        cout << "That is incorrect. \n";
        cout << "Correct answer: " << corrNum;
    }

    return 0;
}