#include <iostream>
using namespace std;

inline double add(double a, double b)
{
    return a + b;
}

inline double subtract(double a, double b)
{
    return a - b;
}

inline double multiply(double a, double b)
{
    return a * b;
}

inline double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Division by zero error!" << endl;
        return 0;
    }
}

inline int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        cout << "Modulus by zero error!" << endl;
        return 0;
    }
}

int main()
{
    double num1, num2;
    int intNum1, intNum2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    cout << "Enter first integer for modulus: ";
    cin >> intNum1;
    cout << "Enter second integer for modulus: ";
    cin >> intNum2;

    cout << "Modulus: " << mod(intNum1, intNum2) << endl;

    return 0;
}
