#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    Employee(string empName, int empId, float empSalary) : name(empName), id(empId), baseSalary(empSalary) {}
    
    void displayEmployeeDetails() {
        cout << "Name: " << name << ", ID: " << id << ", Base Salary: " << baseSalary << endl;
    }
};

class Faculty : public Employee {
private:
    float researchBonus;

public:
    Faculty(string name, int id, float baseSalary, float bonus) : Employee(name, id, baseSalary), researchBonus(bonus) {}

    void calculateSalary() {
        float totalSalary = baseSalary + researchBonus;
        cout << "Faculty Total Salary: " << totalSalary << endl;
    }
};

class Staff : public Employee {
private:
    float overtimePay;

public:
    Staff(string name, int id, float baseSalary, float overtime) : Employee(name, id, baseSalary), overtimePay(overtime) {}

    void calculateSalary() {
        float totalSalary = baseSalary + overtimePay;
        cout << "Staff Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Faculty faculty("Dr.Rajpal Yadav", 101, 50000, 10000);
    Staff staff("Prashant Kumar", 102, 30000, 5000);
    
    faculty.displayEmployeeDetails();
    faculty.calculateSalary();
    
    staff.displayEmployeeDetails();
    staff.calculateSalary();

    return 0;
}
