/*
Write a program that can be used as a math tutor for a young student. The program should display two random numbers between 1 and 9.

After the student has entered an answer and pressed the [ENTER] key, the program should display the correct answer so the student can see if his or her answer is correct.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    unsigned seed = time(0);
    srand(seed);

    int num1 = 1 + rand() % 9,
        num2 = 1 + rand() % 9,
        userNum,
        corrNum;

    cout << right << setw(3) << num1 << endl;
    cout << left << setw(1) << "+" << setw(2) << right << num2 << endl;
    cout << "___\n";

    cin >> userNum;

    corrNum = num1 + num2;

    cout << "Correct answer: " << corrNum;

    return 0;
}