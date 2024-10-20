#include <iostream>
using namespace std;

class friendfunc1;

class friendfunc2
{
    double num3, num4, num5;

public:
    friendfunc2(double n3, double n4, double n5)
    {
        num3 = n3;
        num4 = n4;
        num5 = n5;
    }

    friend double calculateAverage(friendfunc1, friendfunc2);
};

class friendfunc1
{
    double num1, num2;

public:
    friendfunc1(double n1, double n2)
    {
        num1 = n1;
        num2 = n2;
    }

    friend double calculateAverage(friendfunc1, friendfunc2);
};

double calculateAverage(friendfunc1 f1, friendfunc2 f2)
{
    double total = f1.num1 + f1.num2 + f2.num3 + f2.num4 + f2.num5;
    return total / 5;
}

int main()
{
    double a, b, c, d, e;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "Enter fourth number: ";
    cin >> d;
    cout << "Enter fifth number: ";
    cin >> e;

    friendfunc1 obj1(a, b);
    friendfunc2 obj2(c, d, e);

    double average = calculateAverage(obj1, obj2);
    cout << "The average of the five numbers is: " << average << endl;

    return 0;
}
