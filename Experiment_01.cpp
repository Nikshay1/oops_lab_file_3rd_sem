#include <iostream>
using namespace std;

class PersonalDetails {
private:
    string name;
    char surname_initial;
    int total_marks;
    char gender;
    char result;

public:
    void getData() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your surname initial: ";
        cin >> surname_initial;
        cout << "Enter your total marks: ";
        cin >> total_marks;
        cout << "Enter your gender (M/F): ";
        cin >> gender;
        cout << "Enter your result (P/F): ";
        cin >> result;
    }
    void displayData() {
        cout << "\n--- Personal Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Surname Initial: " << surname_initial << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Gender: " << gender << endl;
        cout << "Result: " << result << endl;
    }
};

int main() {
    PersonalDetails person;

    person.getData();
  
    person.displayData();

    return 0;
}
