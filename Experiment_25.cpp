#include <iostream>
using namespace std;

class Data {
private:
    bool flag1;
    bool flag2;

public:
    Data(bool f1, bool f2) : flag1(f1), flag2(f2) {}

    void showData() {
        cout << "Flag1: " << flag1 << ", Flag2: " << flag2 << endl;
    }

    void operator!() {
        flag1 = !flag1;
        flag2 = !flag2;
    }
};

int main() {
    Data obj(true, false);
    
    cout << "Before applying ! operator:" << endl;
    obj.showData();
    
    !obj; // Overloaded ! operator is applied here

    cout << "After applying ! operator:" << endl;
    obj.showData();

    return 0;
}
