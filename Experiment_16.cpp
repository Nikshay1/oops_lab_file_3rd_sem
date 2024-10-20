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

#define SUM(a, b) ((a) + (b))
#define PRODUCT(a, b) ((a) * (b))
#define DIFFERENCE(a, b) ((a) - (b))
#define DIVISION(a, b) ((b) != 0 ? (static_cast<float>(a) / (b)) : (cout << "Error: Division by zero" << endl, 0))

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "\n--- Part A: Inline Functions ---\n";
    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Product: " << product(num1, num2) << endl;
    cout << "Difference: " << difference(num1, num2) << endl;
    cout << "Division: " << division(num1, num2) << endl;

    int sum_result, product_result, difference_result;
    float division_result;
    calculate(num1, num2, sum_result, product_result, difference_result, division_result);

    cout << "\n--- Part B: Reference Variables ---\n";
    cout << "Sum: " << sum_result << endl;
    cout << "Product: " << product_result << endl;
    cout << "Difference: " << difference_result << endl;
    cout << "Division: " << division_result << endl;

    cout << "\n--- Part C: Macros ---\n";
    cout << "Sum: " << SUM(num1, num2) << endl;
    cout << "Product: " << PRODUCT(num1, num2) << endl;
    cout << "Difference: " << DIFFERENCE(num1, num2) << endl;
    cout << "Division: " << DIVISION(num1, num2) << endl;

    return 0;
}
