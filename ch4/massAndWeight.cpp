/*
Scientists measure an object's mas in kilograms and its weight in newtons. If you know an object's mass, you can calculate its weight in newtons with the following formula:

                            weight = mass * 9.8

Write a program that asks the user to enter an object's mass, and then calculates and displays its weight. If the objects weighs more than 1000 newtons, say it is too heavy. If it weighs less than 10 newtons, say it is too light.
*/

#include <iostream>
using namespace std;

int main() {

    const double GRAVITY = 9.8;
    double mass,
           weight;

    cout << "Enter a mass (in kilograms): \n";
    cin >> mass;

    weight = mass * GRAVITY;

    if (weight < 10)
        cout << weight << " is too light";
    else if (weight > 100)
        cout << weight << " is too heavy";
    else
        cout << "Weight: " << weight << " Newtons.";

    return 0;
}