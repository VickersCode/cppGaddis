/*
In the United States, land is often measured in square feet. In many other countries it is measured in squared meters. One acre of land is equivalent to 43,560 square feet. A square meter is equivalent to 10.7639 square feet. Write a program that computes and displays the number of square feet and the number of square meters in 0.25 acre of land. 
*/

#include <iostream>
using namespace std;

int main() {
    float quarterAcreInFeet = 43560 * 0.25;
    float quarrterAcreInMeters = quarterAcreInFeet / 10.7639;

    cout << "A quarter acre in feet is: " << quarterAcreInFeet << endl;
    cout << "A quarter acre in meters is : " << quarrterAcreInMeters;

    return 0;
}