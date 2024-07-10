/*
A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the distributor. Write a program that calculates a theater's gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $6.00 and a childs ticket is $3.00) It should display a report similar to the following:

    Movie Name:                 "Wheels of Fury"
    Adult tickets sold:         382
    Child Tickets sold:         127
    Gross Box Office Profit:    $ 2673.00
    Amount Paid to Distr:      -$ 3138.40
    Net Box Office Profit:      $  534.60

Assume the theater keeps 20% of the gross box office profit. 
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string movieName;

    int adultTickets,
        childTickets;

    double grossProfit,
           dstrPymnt,
           netProfit;

    const double DIST_PERC = 0.2,
                 ADULT_TICKET = 6,
                 CHILD_TICKET = 3;

    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    cout << "Adult tickets sold: ";
    cin >> adultTickets;

    cout << "Child tickets sold: ";
    cin >> childTickets;

    grossProfit = (childTickets * CHILD_TICKET) + (adultTickets * ADULT_TICKET);
    dstrPymnt = grossProfit * DIST_PERC;
    netProfit = grossProfit - dstrPymnt;

    
    cout << setw(26) << left << "Movie Name:" << setw(25) << right << movieName << endl;
    cout << setw(26) << left << "Adult tickets sold:" << setw(25) << right << adultTickets << endl;
    cout << setw(26) << left << "Child Tickets sold: " << setw(25) << right << childTickets << endl;
    cout << fixed << setprecision(2);
    cout << setw(26) << left << "Gross Box Office Profit:" <<  setw(25) << right << "$" << grossProfit << endl;
    cout << setw(26) << left << "Amount Paid to Distr:" << setw(25) << right << "$" << dstrPymnt << endl;
    cout << setw(26) << left << "Net Box Office Profit:" << setw(25) << right << "$" << netProfit << endl;
    

    return 0;
}