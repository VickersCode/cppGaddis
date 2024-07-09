/*
Write a program that asks for five test scores. The program should calculate the average test score and display it. The number displayed should be formatted in fixed-point notation, with one decial point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double test1,
           test2,
           test3,
           test4,
           test5,
           testAvg;

    cout << "What is the score of test 1?";
    cin >> test1;
    cout << "What is the score of test 2?";
    cin >> test2;
    cout << "What is the score of test 3?";
    cin >> test3;
    cout << "What is the score of test 4?";
    cin >> test4;
    cout << "What is the score of test 5?";
    cin >> test5;

    testAvg = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << fixed << setprecision(1);
    cout << "The test average is: " << testAvg;

    return 0;
}