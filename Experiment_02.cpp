#include <iostream>
using namespace std;

class Employee
{
    int Empnumber;
    string Empname;

public:
    void getdata()
    {
        cout << "Enter Employee Number: ";
        cin >> Empnumber;
        cout << "Enter Employee Name: ";
        cin >> Empname;
    }

    void display()
    {
        cout << "Employee Number: " << Empnumber << ", Name: " << Empname << endl;
    }
};

int main()
{

    Employee employees[6];

    cout << "Enter details of 6 employees:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].getdata();
    }

    cout << "\nEmployee details:" << endl;
    for (int i = 0; i < 6; i++)
    {
        employees[i].display();
    }

    return 0;
}
