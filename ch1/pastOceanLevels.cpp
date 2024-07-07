/*
The Earth's ocean levels have risen an average of 1.8 mm per year over the past century. Write a program that computes and displays the number of centimeters and number of inches the oceans rose during this time. (1mm = 0.1cm; 1cm = 0.3937in.)
*/

#include <iostream>
using namespace std;

int main() {

    float cm = 1.8 * 0.1;
    float inches = cm * 0.3937;

    cout << "The ocean has risen an average of: \n";
    cout << "1.8mm per year \n";
    cout << cm << "cm per year \n";
    cout << "and " << inches << "in per year";

    return 0;
}