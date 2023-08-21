#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string an, double b)
    {
        accountNumber = an;
        balance = b;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit successful, amount added." << endl;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw successful." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    double showBalance()
    {
        return balance;
    }
};

int main()
{
    string account_name, input;
    double initial_amount, deposit_amount, withdraw_amount;
    cout << "Enter the account number." << endl;
    cin >> account_name;
    cout << "Enter the balance in account." << endl;
    cin >> initial_amount;

    BankAccount account1(account_name, initial_amount);
    cout << "Click 1 to withdraw and 2 to deposit" << endl;
    cin >> input;

    if (input == "1")
    {
        cout << "Enter the withdraw amount." << endl;
        cin >> withdraw_amount;
        account1.withdraw(withdraw_amount);
        cout << "The total amount now is " << account1.showBalance() << endl;
    }
    else if (input == "2")
    {
        cout << "Enter the deposit amount." << endl;
        cin >> deposit_amount;
        account1.deposit(deposit_amount);
        cout << "The total amount now is " << account1.showBalance() << endl;
    }
    else
    {
        cout << "Enter the valid number.";
    }

    return 0;
}