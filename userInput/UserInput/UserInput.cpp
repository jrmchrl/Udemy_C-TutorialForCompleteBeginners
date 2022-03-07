// UserInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Enter your name:\n" << flush;
    string input;
    cin >> input;
    cout << "You entered: " << input << endl;

    cout << "Enter a number " << flush;
    int value;
    cin >> value; 
    cout << "You entered: " << value << endl;

    return 0;

}

