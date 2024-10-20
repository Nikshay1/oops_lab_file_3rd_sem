#include <iostream>
using namespace std;

void calculate(int& a, int& b, int& sum, int& product, int& difference, float& division) {
    sum = a + b;
    product = a * b;
    difference = a - b;
    if (b != 0)
        division = static_cast<float>(a) / b;
    else {
        cout << "Error: Division by zero" << endl;
        division = 0;
    }
}

int main() {
    int num1, num2, sum, product, difference;
    float division;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    calculate(num1, num2, sum, product, difference, division);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    cout << "Division: " << division << endl;

    return 0;
}
