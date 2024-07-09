/*
A particular employee earns $32,500 annually. Write a program that determines and displays what the amount of his gross pay will be for each pay period if he is paid twice a month (24 checks per year) and if he is paid bi-weekly (26 checks per year)
*/

#include <iostream>
using namespace std;

int main() {

    int PAY = 32500;
    int TWO_A_MONTH = 24;
    int BI_WEEKLY = 26;

    cout << "Two checks a month yeilds $" << PAY / TWO_A_MONTH << " per check \n";
    cout << "Bi-weekly checks yeilds $" << PAY / BI_WEEKLY << " per check.";

    return 0;
}