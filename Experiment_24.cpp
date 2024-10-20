#include <iostream>
using namespace std;

class Base {
protected:
    int num;

public:
    virtual void getData() = 0; // Pure virtual function for input
    virtual void showData() = 0; // Pure virtual function for displaying input
    virtual void showResult() = 0; // Pure virtual function for displaying result
};

class Square : public Base {
public:
    void getData() override {
        cout << "Enter a number to find the square: ";
        cin >> num;
    }

    void showData() override {
        cout << "Number entered: " << num << endl;
    }

    void showResult() override {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

class Cube : public Base {
public:
    void getData() override {
        cout << "Enter a number to find the cube: ";
        cin >> num;
    }

    void showData() override {
        cout << "Number entered: " << num << endl;
    }

    void showResult() override {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Base* basePtr;

    Square squareObj;
    Cube cubeObj;

    // Finding square
    basePtr = &squareObj;
    basePtr->getData();
    basePtr->showData();
    basePtr->showResult();

    cout << endl;

    // Finding cube
    basePtr = &cubeObj;
    basePtr->getData();
    basePtr->showData();
    basePtr->showResult();

    return 0;
}
