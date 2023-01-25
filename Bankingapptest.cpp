// Bankingapptest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using namespace std;



//Function creation
//In all values the function can change the value of balance
double balance_check(double &balance) {
    cout << "Your available balance is " << balance;
    ending_check();
}


void withdraw(double &balance) {
    cout << "How much money would you like to withdraw";
    ending_check();
}


void deposit(double &balance) {
    cout << "How much money would you like to deposit?";
    ending_check();
}


void ending_check() {
    char input{};
    cout << "Thank you for your transaction!\nWould you like to make another? Please type 'y' or 'n'";
}




int main()
{
    //Variables
    char input{};
    bool end{};
    double balance{ 0 };





    do {
        //User prompt 
        cout << "What would you like to do\n" << "Type 'b' for a balance check\nType 'w' for a withdraw\nType 'd' for deposit\nOr press 'q' to quit the program ";
        cin >> input;
        
        //Check for upper case characters and convert them to lower case
        if (isupper(input))
            input = tolower(input);
        

        //Check for input
        switch (input) {
            case 'b':
                balance_check(balance);
                break;
            case 'w':
                withdraw(balance);
                break;
            case 'd':
                deposit(balance);
            case 'q':
                cout << "Thank you for using this program!\n";
                end = true;
                break;
            default:
                cout << "Please insert a valid option listed above";
                break;
        }

        
    } while (!end);


}

