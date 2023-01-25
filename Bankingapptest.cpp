// Bankingapptest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char input{};
    bool end{ false };
    double balance{ 0 };
    cout << balance;

    do {
        cout << "What would you like to do\n" << "Type 'b' for a balance check\n Type 'w' for a withdraw\n Type 'd' for deposit\n Or press 'q' to quit";
        

    } while (!end);
}
