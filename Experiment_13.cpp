#include <iostream>
using namespace std;

template <typename T>
class Pair {
    T num1, num2;

public:
    Pair(T a, T b) : num1(a), num2(b) {}

    T get_max() {
        return (num1 > num2) ? num1 : num2;
    }
};

int main() {
    
    Pair<int> p1(10, 20);       // Pair of integers
    Pair<float> p2(5.5, 7.8);   // Pair of floats
    Pair<double> p3(3.14, 6.28);// Pair of doubles

    
    cout << "Max of 10 and 20 (int): " << p1.get_max() << endl;
    cout << "Max of 5.5 and 7.8 (float): " << p2.get_max() << endl;
    cout << "Max of 3.14 and 6.28 (double): " << p3.get_max() << endl;

    return 0;
}
