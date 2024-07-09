/*
A star player of a high school basketball team is 73 inches tall. Write a program to compute and display the height in feet / inches form.
*/

#include <iostream>
using namespace std;

int main() {

    int INCHES_PER_FOOT = 12;
    int player = 73;

    cout << "The player is " << player / INCHES_PER_FOOT << " feet \n";
    cout << "and " << player % INCHES_PER_FOOT << " inches tall.";

    return 0;
}