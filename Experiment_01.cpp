#include <iostream>
using namespace std;

int main()
{
    string name;
    char surname_initial;
    int total_marks;
    char gender;
    char result;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your surname initial: ";
    cin >> surname_initial;

    cout << "Enter your total marks: ";
    cin >> total_marks;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your result (P/F): ";
    cin >> result;

    cout << "\n--- Personal Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Surname initial: " << surname_initial << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Gender: " << gender << endl;
    cout << "Result: " << result << endl;

    return 0;
}
