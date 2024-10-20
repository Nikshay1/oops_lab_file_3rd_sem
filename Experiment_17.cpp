#include <iostream>
using namespace std;

void calculateTotalSalary() {
    static float totalSalary = 0;
    float salary;

    for (int i = 1; i <= 10; ++i) {
        cout << "Enter salary for employee " << i << ": ";
        cin >> salary;
        totalSalary += salary;
    }

    cout << "Total salary of 10 employees: " << totalSalary << endl;
}

int main() {
    calculateTotalSalary();
    return 0;
}
