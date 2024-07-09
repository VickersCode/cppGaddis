/*
Write a program to find a baseball player's batting average. The program should ask the user to enter the number of times the player was at bat and the number of hits he got. It should then display his batting average to 4 decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double batAttempts,
           batHits,
           batAvg;

    cout << "Enter the number of times at bat:";
    cin >> batAttempts;

    cout << "Enter the number of hits:";
    cin >> batHits;

    batAvg = batHits / batAttempts;

    cout << fixed << setprecision(4);
    cout << "Your batting average is: " << batAvg;

    return 0;
}