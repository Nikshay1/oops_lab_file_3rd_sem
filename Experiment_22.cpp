#include <iostream>
using namespace std;

void area(int side) {
    cout << "Shape: Square" << endl;
    cout << "Input (side): " << side << endl;
    cout << "Area: " << side * side << endl << endl;
}

void area(float radius) {
    cout << "Shape: Circle" << endl;
    cout << "Input (radius): " << radius << endl;
    cout << "Area: " << 3.14159 * radius * radius << endl << endl;
}

void area(long length, unsigned width) {
    cout << "Shape: Rectangle" << endl;
    cout << "Input (length): " << length << ", (width): " << width << endl;
    cout << "Area: " << length * width << endl << endl;
}

void area(double base, short height) {
    cout << "Shape: Triangle" << endl;
    cout << "Input (base): " << base << ", (height): " << height << endl;
    cout << "Area: " << 0.5 * base * height << endl << endl;
}

void area(float majorAxis, double minorAxis) {
    cout << "Shape: Ellipse" << endl;
    cout << "Input (major axis): " << majorAxis << ", (minor axis): " << minorAxis << endl;
    cout << "Area: " << 3.14159 * majorAxis * minorAxis << endl << endl;
}

int main() {
    area(5);                          // Square
    area(3.5f);                       // Circle
    area(10L, 5U);                    // Rectangle
    area(6.0, 4);                     // Triangle
    area(3.2f, 2.5);                  // Ellipse
    
    return 0;
}

