/*
During the past decade ocean levels have been rising faster than in the past, an average of 3.1mm per year. Write a program that computes how much ocean levels are expected to rise during the next 20 years if they continue rising at this rate. Display the anser in both cm and inches. 
*/

#include <iostream>
using namespace std;

int main() {

    float MM_PER_YEAR = 3.1;
    float CM_PER_YEAR = MM_PER_YEAR * 0.1;
    float INCHES_PER_YEAR = CM_PER_YEAR * 0.3937;

    cout << "In 20 years, the sea level will rise \n";
    cout << MM_PER_YEAR << "mm per year \n";
    cout << CM_PER_YEAR << "cm per year \n";
    cout << INCHES_PER_YEAR << "in per year.";


    return 0;
}