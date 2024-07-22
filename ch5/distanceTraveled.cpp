/*
The distance a vehicle travels can be calculated as follows:

            distance = speed * time

Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. It should then use a loop to display the total distance traveled at the end of each hour of that time period. Here is an example of the output:

                            What is the speed of the vehicle in mph? 40
                            How many hours has it traveled? 3
                            Hour        Distance Traveled
                            _____________________________________________
                            1           40
                            2           80
                            3          120
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int distance=0, 
        speed=0, 
        time=0;

    while (speed <= 0)
    {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
    }
    
    while (time <= 0)
    {
        cout << "How many hours has it traveled? ";
        cin >> time;
    }

    cout << "Hour       Distance Traveled\n";
    cout << "____________________________\n";

    for (int i = 1; i <= time; i++)
    {
        distance = i * speed;
        cout << setw(10) << left << i << setw(25) << distance << endl;
    }

    
    

    return 0;
}