/*
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros, storing the conversion factors in constants. To get the most up-to-date exchange rates, search the Internet using the term "currency exchange rate" or "currency converter".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double US_TO_YEN = 158.56,
                 US_TO_EURO = 0.92;

    double usDollars,
           yenConversion,
           euroConversion;

    cout << "Enter the amount of dollars to convert: \n";
    cin >> usDollars;

    yenConversion = usDollars * US_TO_YEN;
    euroConversion = usDollars * US_TO_EURO;

    cout << fixed << setprecision(2);
    cout << "Yen: " << yenConversion << endl;
    cout << "Euros: " << euroConversion << endl;


    return 0;
}