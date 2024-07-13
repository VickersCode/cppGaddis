/*
For this assignment, write two programs:

    A) Write a program that asks the user to enter five floating point numbers. The program should create a file and save all five numbers to the file.
    B) Write a program that opens the file created by program A, reads the five numbers, and displays them. The program should also calculate and display the sum of the five numbers.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    float num1,
          num2,
          num3,
          num4,
          num5;

    cout << "Write 5 floating point numbers, serpated by spaces: \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    ofstream outputFile;
    outputFile.open("nums.txt");

    outputFile << num1 << endl;
    outputFile << num2 << endl;
    outputFile << num3 << endl;
    outputFile << num4 << endl;
    outputFile << num5;

    outputFile.close();

    return 0;
}