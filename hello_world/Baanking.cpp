#include <iostream>
using namespace std;

float balance = 5000.00; 
bool hasWithdrawn = false; 

void deposit(float amount) {
    if(amount > 0) {
        balance = balance + amount;
        cout << "Deposit Successful! New Balance: $" << balance << endl;
    } else {
        cout << "Invalid amount.\n";
    }
}

void withdraw(float amount) {
    if(amount > balance) {
        cout << "Declined: Insufficient Funds\n";
    } else if(amount > 0) {
        balance = balance - amount;
        hasWithdrawn = true; 
        cout << "Withdrawal Successful! New Balance: $" << balance << endl;
    } else {
        cout << "Invalid amount.\n";
    }
}


bool verifyPIN() {
    const int correctPIN = 1234;  
    int enteredPIN;
    for(int i = 1; i <= 3; i++) {
        cout << "Attempt " << i << "/3 - Enter 4-digit PIN: ";
        cin >> enteredPIN;
        if(enteredPIN == correctPIN) {
            cout << "PIN Verified Successfully!\n";
            return true; 
        } else {
            if(i < 3) {
                cout << "Incorrect PIN. Try again.\n";
            }
        }
    }
    return false; 
}

int main() {
    int choice;
    float amount, depositAmt, withdrawAmt;

    if(verifyPIN() == false) {
        cout << "\nAccount Locked! Too many incorrect attempts.\n";
        return 0; 
    }

    while(true) {
        cout << "\n===== Secure Banking Terminal =====\n";
        cout << "Current Balance: $" << balance << endl;
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Deposit & Withdraw Together\n"; 
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) { 
            cout << "Enter amount to deposit: $";
            cin >> amount;
            deposit(amount); 

        } else if(choice == 2) { 
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            withdraw(amount); 

        } else if(choice == 3) { 
            cout << "Enter amount to deposit: $";
            cin >> depositAmt;
            cout << "Enter amount to withdraw: $";
            cin >> withdrawAmt;
            deposit(depositAmt); 
            withdraw(withdrawAmt); 

        } else if(choice == 4) { 
            cout << "Thank you for using Secure Banking Terminal. Goodbye!\n";
            break; 

        } else { 
            cout << "Invalid choice. Please select 1-4.\n";
        }
    } 

    if(hasWithdrawn == true) {
        cout << "Please collect your card and money\n";
    } else {
        cout << "Please collect your card\n";
    }

    return 0;
}