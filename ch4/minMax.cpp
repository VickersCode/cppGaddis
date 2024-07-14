/* 
Write a program that asks the user to enter two numbers. The program should use the conditional operator to determine which number is the smaller and which is larger.
*/

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter two numbers: \n";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater and " << num2 << " is smaller.";
    }
    else {
        cout << num2 << " is greater and " << num1 << " is smaller.";
    }

    return 0;
}