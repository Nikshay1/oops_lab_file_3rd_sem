#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
    int roll_no;
    string name;

public:
    void set_data(int r, string n) {
        roll_no = r;
        name = n;
    }

    void print() {
        cout << "Object invoked by roll_no: " << this->roll_no << ", name: " << this->name << endl;
    }
};

int main() {
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(101, "Alice");
    obj2.set_data(102, "Bob");
    obj3.set_data(103, "Charlie");

    obj1.print();  // Print which object invoked it using this pointer
    obj2.print();  // Print which object invoked it using this pointer
    obj3.print();  // Print which object invoked it using this pointer

    return 0;
}
