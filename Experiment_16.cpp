#include <iostream>
using namespace std;

#define SUM(a, b) ((a) + (b))
#define PRODUCT(a, b) ((a) * (b))
#define DIFFERENCE(a, b) ((a) - (b))
#define DIVISION(a, b) ((b) != 0 ? (static_cast<float>(a) / (b)) : (cout << "Error: Division by zero" << endl, 0))

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << SUM(num1, num2) << endl;
    cout << "Product: " << PRODUCT(num1, num2) << endl;
    cout << "Difference: " << DIFFERENCE(num1, num2) << endl;
    cout << "Division: " << DIVISION(num1, num2) << endl;

    return 0;
}
