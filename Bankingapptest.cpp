// Bankingapptest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using  std::cout;
using std::cin;
using std::endl;
using std::fixed;




//Function creation
//In all values the function can change the value of balance

//Outputs balance
void balance_check(double &balance) {
    cout << "Your available balance is $" << fixed <<balance << endl;
}

//Removes value from balance unless the value is more than the balance
void withdraw(double &balance) {
    double input{};
    double difference{};
    cout.precision(2);
    cout << "How much money would you like to withdraw\n";
    cin >> input;
    if (input > balance) {
        difference = input - balance;
        cout << "Unable to complete transaction because the requested withdraw amount is $" << fixed << difference << " higher than your available balance\n";
        cout << "If you wish to make a withdraw please select an amount lower than $" << fixed << balance << endl;
    }
    
    else {
        balance -= input;
        cout << "$" << input << " has been withdrawn from your account!\n";
    }
    
    

}

//Adds to the balance 
void deposit(double &balance) {
    double input{};
    cout.precision(2);
    cout << "How much money would you like to deposit?\n";
    cin >> input;
    balance += input;
    cout << "$" << fixed << input << " has been added to your account!\n";
}


//Checks if they wish to end the program
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
        cout << "Invalid value, please try again\n";
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
        cout << "What would you like to do\n" << "Type 'b' for a balance check\nType 'w' for a withdraw\nType 'd' for deposit\nOr press 'q' to quit the program\n";
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
                break;
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

