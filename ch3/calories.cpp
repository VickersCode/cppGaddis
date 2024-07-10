/*
A bog of cookies holds 40 cookies. The calorie information on the bag claims that there are 10 "servings" in the bag and that a serving equals 300 calories. Write a program that asks the user to input how many cookies they actually ate and then reports how many total calories were consumed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double COOKIES_PER_BAG = 40,
              SERVINGS_PER_BAG = 10,
              CALORIES_PER_SERVING = 300;

    double cookiesEaten;
    double caloriesEaten;
    const double CALORIES_PER_COOKIE = (CALORIES_PER_SERVING * SERVINGS_PER_BAG) / COOKIES_PER_BAG;

    cout << "How many cookies did you eat: ";
    cin >> cookiesEaten;

    caloriesEaten = CALORIES_PER_COOKIE * cookiesEaten;

    cout  << "You ate " << caloriesEaten << " calories";

    return 0;
}