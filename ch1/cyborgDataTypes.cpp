/*
You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any manuals, so you can't look us this information. Write a C++ program that will determine the amount of memory used by these typesand display the information on the screen. 
*/

#include <iostream>
using namespace std;

int main() {

    cout << "the char data type has " << sizeof(char) << " bytes. \n";
    cout << "the int data type has " << sizeof(int) << " bytes. \n";
    cout << "the float data type has " << sizeof(float) << " bytes. \n";
    cout << "the double data type has " << sizeof(double) << " bytes.";

    return 0;
}