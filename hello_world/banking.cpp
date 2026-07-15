#include <iostream>
using namespace std;

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
    float balance = 5000.00; 
    int choice;
    float amount;

    if(verifyPIN() == false) {
        cout << "\nAccount Locked! Too many incorrect attempts.\n";
        return 0; 
    }

    while(true) {
        cout << "\n===== Secure Banking Terminal =====\n";
        cout << "Current Balance: $" << balance << endl;
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) { 
            cout << "Enter amount to deposit: $";
            cin >> amount;
            if(amount > 0) {
                balance = balance + amount;
                cout << "Deposit Successful! New Balance: $" << balance << endl;
            } else {
                cout << "Invalid amount.\n";
            }

        } else if(choice == 2) { 
            cout << "Enter amount to withdraw: $";
            cin >> amount;
    
            if(amount > balance) {
                cout << "Declined: Insufficient Funds\n";
            } else if(amount > 0) {
                balance = balance - amount;
                cout << "Withdrawal Successful! New Balance: $" << balance << endl;
            } else {
                cout << "Invalid amount.\n";
            }

        } else if(choice == 3) { 
            cout << "Thank you for using Secure Banking Terminal. Goodbye!\n";
            return 0;

        } else {
            cout << "Invalid choice. Please select 1-3.\n";
        }
    }

    return 0;
}