#include <iostream>
using namespace std;

void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (by value): a = " << a << ", b = " << b << endl;
}

void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (by reference): a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b, choice;

    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    cout << "\nChoose the swapping method:\n";
    cout << "1. Swap by Value\n";
    cout << "2. Swap by Reference\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        swap_value(a, b);

        cout << "Original values after call by value: a = " << a << ", b = " << b << endl;
        break;
    case 2:
        swap_reference(a, b);

        cout << "Original values after call by reference: a = " << a << ", b = " << b << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
