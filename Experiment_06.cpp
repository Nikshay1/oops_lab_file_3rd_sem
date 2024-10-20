#include <iostream>
#include <string>
using namespace std;

class Student; // Forward declaration of Student class

class AverageCalculator
{
public:
    double markAvg(Student &student);
};

class Student
{
    string name;
    double marks[3];

public:
    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter three different marks: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        AverageCalculator avgCalc;
        double average = avgCalc.markAvg(*this);
        cout << "Student Name: " << name << ", Average Marks: " << average << endl;
    }

    friend class AverageCalculator;
};

double AverageCalculator::markAvg(Student &student)
{
    double total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += student.marks[i];
    }
    return total / 3;
}

int main()
{
    Student student;
    student.getData();
    student.display();
    return 0;
}
