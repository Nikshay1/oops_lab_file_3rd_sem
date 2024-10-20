#include <iostream>
using namespace std;

class BankAccount
{
    double balance;
    double interest_rate;

public:
    BankAccount(double initial_balance, double rate_of_interest)
    {
        balance = initial_balance;
        interest_rate = rate_of_interest;
        cout << "Bank account created with initial balance: " << balance
             << " and interest rate: " << interest_rate << "%" << endl;
    }

    ~BankAccount()
    {
        cout << "Bank account object is being destroyed." << endl;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << ", New balance: " << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }

    void calculate_interest()
    {
        double interest = (balance * interest_rate) / 100;
        balance += interest;
        cout << "Interest added: " << interest << ", New balance: " << balance << endl;
    }

    void display_balance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    double initial_balance, interest_rate;

    cout << "Enter the initial balance: ";
    cin >> initial_balance;
    cout << "Enter the interest rate (%): ";
    cin >> interest_rate;

    BankAccount account(initial_balance, interest_rate);

    account.display_balance();
    account.deposit(500);
    account.withdraw(200);
    account.calculate_interest();
    account.display_balance();

    return 0;
}
