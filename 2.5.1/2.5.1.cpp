// 2.5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //libraries and namespace
using namespace std;

int main()
{
    string name; //Initialize the name string
    int autocap = 1; //Controls automatic capitalization ~ set to 0 to disable
    cout << "Enter string!\n"; //Prompt user for string
    try {
        cin >> name; //Enter the string
        if (islower(name[0])) //Check if lowercase
        {
            throw "Name not uppercase"; //Throw exception if first letter is lowercase
        }
        cout << "First letter is capitalized\n"; //Print this if first letter is capitalized
    }

    catch (...)
    {
        cout << "First letter not capitalized!\n"; //Warn user first letter is lowercase
        if (autocap == 1) //Check for auto capitalization setting
        {
            name[0] = (toupper(name[0])); //Capitalize the first letter
            cout << "First letter successfully capitalized.\n";
        }

    }

    cout << "Your string is: \n" << name; //Print string
}

    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
