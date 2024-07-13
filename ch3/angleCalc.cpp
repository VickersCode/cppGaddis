/*
Write a program that asks the user for an angle, entered in radians. The program should then display the since, cosine, and tangent of the angle. The output should be displayed in fixed-point notation, rounded to four decimal places.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    double angle,
           sinAngle,
           cosAngle,
           tanAngle;

    cout << "Enter an angle in radians: \n";
    cin >> angle;

    sinAngle = sin(angle);
    cosAngle = cos(angle);
    tanAngle = tan(angle);

    cout << fixed << setprecision(4);
    cout << "sin: " << sinAngle << endl;
    cout << "cos: " << cosAngle << endl;
    cout << "tan: " << tanAngle << endl;


    return 0;
}