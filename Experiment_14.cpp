#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

inline int product(int a, int b) {
    return a * b;
}

inline int difference(int a, int b) {
    return a - b;
}

inline float division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Product: " << product(num1, num2) << endl;
    cout << "Difference: " << difference(num1, num2) << endl;
    cout << "Division: " << division(num1, num2) << endl;

    return 0;
}
