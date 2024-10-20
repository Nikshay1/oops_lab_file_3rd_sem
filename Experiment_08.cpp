#include <iostream>
using namespace std;

int absolute(int num)
{
    return (num < 0) ? -num : num;
}

float absolute(float num)
{
    return (num < 0.0f) ? -num : num;
}

int main()
{
    int intNum;
    float floatNum;

    cout << "Enter an integer: ";
    cin >> intNum;
    cout << "Absolute value of " << intNum << " is: " << absolute(intNum) << endl;

    cout << "Enter a float: ";
    cin >> floatNum;
    cout << "Absolute value of " << floatNum << " is: " << absolute(floatNum) << endl;

    return 0;
}
