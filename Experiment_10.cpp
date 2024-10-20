#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Account : virtual public Person
{
protected:
    int accountNumber;
    float balance;

public:
    void getAccountData()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void displayAccountData() const
    {
        cout << "Account Number: " << accountNumber << ", Balance: Rs" << balance << endl;
    }
};

class Admin : virtual public Person
{
protected:
    string role;

public:
    void getAdminData()
    {
        cout << "Enter admin role: ";
        cin >> role;
    }

    void displayAdminData() const
    {
        cout << "Role: " << role << endl;
    }
};

class Master : public Account, public Admin
{
public:
    void getMasterData()
    {
        getPersonData();
        getAccountData();
        getAdminData();
    }

    void displayMasterData() const
    {
        displayPersonData();
        displayAccountData();
        displayAdminData();
    }

    void updateBalance(float newBalance)
    {
        balance = newBalance;
        cout << "Balance updated successfully." << endl;
    }
};

int main()
{
    Master masterObj;

    cout << "Enter Master data:" << endl;
    masterObj.getMasterData();

    cout << "\nDisplaying Master data:" << endl;
    masterObj.displayMasterData();

    cout << "\nUpdating balance..." << endl;
    float newBalance;
    cout << "Enter new balance: ";
    cin >> newBalance;
    masterObj.updateBalance(newBalance);

    cout << "\nDisplaying updated Master data:" << endl;
    masterObj.displayMasterData();

    return 0;
}
