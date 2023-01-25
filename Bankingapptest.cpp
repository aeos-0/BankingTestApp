// Bankingapptest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char input{};
    bool end{ false };
    double balance{ 0 };

    do {
        //User prompt 
        cout << "What would you like to do\n" << "Type 'b' for a balance check\nType 'w' for a withdraw\nType 'd' for deposit\nOr press 'q' to quit the program ";
        cin >> input;
        
        //Check for upper case characters and convert them to lower case
        if (isupper(input))
            tolower(input);
        

        //Check for input
        switch (input) {
            case 'b':
                cout << "Successful balance check";
                break;
            default:
                cout << "Please insert a valid option listed above";
                break;
        }

    } while (!end);
}
