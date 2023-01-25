// Bankingapptest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using  std::cout;
using std::cin;
using std::endl;


//bool end{};
//Function creation
//In all values the function can change the value of balance
void balance_check(double &balance) {
    cout << "Your available balance is " << balance << endl;
}


void withdraw(double &balance) {
    cout << "How much money would you like to withdraw\n";
}


void deposit(double &balance) {
    cout << "How much money would you like to deposit?\n";
}


void ending_check(bool &end) {
    char input{};
    cout << "Thank you for your transaction!\nWould you like to make another? Please type 'y' or 'n'\n";
    cin >> input;
    
    if (input == 'y' || input == 'Y') {
        end = false;
    }

    else if (input == 'n' || input == 'N') {
        end = true;
    }

    else {
        cout << "Invalid value";
    }
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
                ending_check(end);
                break;
            case 'w':
                withdraw(balance);
                ending_check(end);
                break;
            case 'd':
                deposit(balance);
                ending_check(end);
            case 'q':
                end = true;
                break;
            default:
                cout << "Please insert a valid option listed above";
                break;
        }

        
    } while (!end);

    cout << "Thank you for using this program!\n";

}

