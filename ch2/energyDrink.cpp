/*
A soft drink company recently surveyed 12,467 of its customers and found that approximately 14 percent of thsoe surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 64 percent of them prefer citrus flavored energy drinks. Write a program that displays the following:

    - The approximate number of customers in the survey who purchase one or more energy drinks per week. 
    - the approximate number of customers in the survey who prefer citrus flavored energy drinks.

*/

#include <iostream>
using namespace std;

int main() {

    int CUST_PER_WEEK = 12467 * 0.14;
    int CUST_CITRUS = CUST_PER_WEEK * 0.64;

    cout << CUST_PER_WEEK << " customers per week \n";
    cout << "and " << CUST_CITRUS << " customers like citrus.";

    return 0;
}