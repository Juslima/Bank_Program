#include <iostream>
using namespace std;
// Function to make a deposit
void makeDeposit(double& balance) {
    double depositAmount;
    cout << "Enter the deposit amount: $";
    cin >> depositAmount;
    balance += depositAmount;
    cout << "New balance: $" << balance << endl;
}
// Function to make a withdrawal
void makeWithdrawal(double& balance) {
    double withdrawalAmount;
    cout << "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;
    if (withdrawalAmount > balance) {
        cout << "Insufficient funds. Withdrawal not allowed." << endl;
    }
    else {
        balance -= withdrawalAmount;
        cout << "New balance: $" << balance << endl;
    }
}
int main() {
    int choice;
    double balance;
    cout << "Enter your initial balance: $";
    cin >> balance;
    cout << "Welcome to your account\n";
    cout << "Balance: $" << balance << endl;
    while (true) {
        // Display the menu
        cout << "1) Make a Deposit\n";
        cout << "2) Make a Withdrawal\n";
        cout << "3) Balance\n";
        cout << "4) Exit\n";
        // Get user's choice
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> choice;
        switch (choice) {
        case 1:
            makeDeposit(balance);
            break;
        case 2:
            makeWithdrawal(balance);
            break;
        case 3:
            cout << "Current Balance: $" << balance << endl;
            break;
        case 4:
            cout << "Exiting the program. Final balance: $" << balance << endl;
            return 0;  // Exit the program
        default:
            cout << "Invalid choice. Please select 1, 2, 3, or 4." << endl;
        }
    }
    return 0;
}
