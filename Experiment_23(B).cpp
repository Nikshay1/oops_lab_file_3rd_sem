#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string empName, int empId) : name(empName), id(empId) {}

    void displayEmployeeDetails() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Salary {
protected:
    float baseSalary;
    float bonus;

public:
    Salary(float base, float bon) : baseSalary(base), bonus(bon) {}

    float calculateSalary() {
        return baseSalary + bonus;
    }
};

class Faculty : public Employee, public Salary {
public:
    Faculty(string name, int id, float baseSalary, float bonus)
        : Employee(name, id), Salary(baseSalary, bonus) {}

    void displaySalary() {
        displayEmployeeDetails();
        cout << "Faculty Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Faculty faculty("Dr. Bhim ", 101, 50000, 10000);
    faculty.displaySalary();

    return 0;
}
