/*
The area of a rectangle is the rectangle's length times its width. Write a program that asks for the length and width of two rectangles. The program should tell the user which rectangle has the greater area, or if the areas are the same.
*/

#include <iostream>
using namespace std;

int main() {

    double length1,
           length2,
           width1,
           width2,
           area1,
           area2;

    cout << "Enter the dimensions for rectangle 1: \n";
    cin >> length1 >> width1;
    area1 = length1 * width1;

    cout << "Enter the dimentsion for rectangle 2: \n";
    cin >> length2 >> width2;
    area2 = length2 * width2;

    if (area1 == area2)
    {
        cout << "The areas are the same.\n";
    }
    else if (area1 < area2) 
    {
        cout << "Area 2 is bigger.\n";
    }
    else
    {
        cout << "Area 1 is bigger.\n";
    }

    return 0;
}