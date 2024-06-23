#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    float balance;

public:
    BankAccount(int accNumber, float bal)
    {
        accountNumber = accNumber;
        balance = bal;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Amount To Deposit = " << endl;
        cin >> amount;
        cout << "You Deposited = " << amount << " in Your Account" << endl;
        balance += amount;
        cout << "Your Current Balance = " << balance << endl;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Amount To Withdraw = " << endl;
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            cout << "You Withdraw = " << amount << " from Your Account" << endl;
            balance -= amount;
            cout << "Your Current Balance = " << balance << endl;
        }
    }

    void getBalance()
    {
        cout << "Your Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b1(123, 5000); // Correct object creation and initialization
    b1.getBalance();
    b1.deposit();  // Added to test deposit function
    b1.withdraw(); // Added to test withdraw function
    return 0;
}
