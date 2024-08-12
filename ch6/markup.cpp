/*
Write a program that asks the user to enter an item's wholesale cost and its markup percentage. It should then display the item's retail price. For example:

    - If an item's wholesale cost is 5.00 and it's markup is 100%, then the item's retail price is 10.00.
    - If an item's wholesale cost is 5.00 and it's markup is 50%, then the item's retail price is 7.50.

The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.

Input Validation: Do not accept negative valuesfor either the wholesale cost of the item or the markup percentage.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double wholesale, double percentage);

int main() 
{
    double wholesale, 
           percentage,
           total;

    
    while (wholesale < 1)
    {
        cout << "Please enter the wholesale cost: \n";
        cin >> wholesale;
    }
    
    cout << endl;
    
    while (percentage < 1)
    {
        cout << "Please enter the markup percentage:\n";
        cin >> percentage;
    }
    

    percentage *= 0.01;

    total = calculateRetail(wholesale, percentage);

    cout << fixed << setprecision(2);
    cout << "You're total retail price is: " << total;

    return 0;
}

double calculateRetail(double wholesale, double percentage)
{
    double retail, markup;
    markup = wholesale * percentage;
    retail = wholesale + markup;

    return retail;
}