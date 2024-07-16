/*
Write a program that displays the following menu:

            Geometry Calculator

            1. Calculate the area of a circle
            2. Calculate the area of a rectangle
            3. Calculate the area of a triangle
            4. Quit

            Enter your choice (1-4):

Write a program that calculates the choice that the user picks. Use input validation to ensure correct menu choice and no negative numbers.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int choice;
    double area;

    cout << "Geomery Calculator \n\n";
    cout << "1. Calculate the area of a circle\n";
    cout << "2. Calculate the area of a rectangle\n";
    cout << "3. Calculate the area of a triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice (1-4):\n";

    cin >> choice;

    if ((choice <= 0) || (choice > 4))
        cout << "Incorrect option. Run the program again.";
    else
    {
        switch (choice)
        {
            case 1: double radius;
                    cout << "Enter a radius: \n";            
                    cin >> radius;
                    if (radius < 0)
                        cout << "Invalid number. Run the program again.";
                    else
                    {
                        area = PI * pow(radius, 2);
                        cout << "The area of the circle is: " << area;
                    }
                    break;

            case 2: double length,
                           width;
                    cout << "Enter the length and width of the rectangle: \n";
                    cin >> length >> width;
                    if ((length < 0) || (width < 0))
                        cout << "Either the width or length or both were negative. Please run again.";
                    else
                    {
                        area = length * width;
                        cout << "The area of the rectangle is: " << area;
                    }
                    break;

            case 3: double base,
                           height;
                    cout << "Enter the base and the height of the triangle: \n";
                    cin >> base >> height;
                    if ((base < 0) || (height < 0))
                        cout << "Either the base or the height or both were negative. Please run again.";
                    else 
                    {
                        area = 0.5 * base * height;
                        cout << "The area of the triangle is: " << area;
                    }
                    break;
        }
    }

    return 0;
}