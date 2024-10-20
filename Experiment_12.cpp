#include <iostream>
using namespace std;

class C_Polygon {
public:
    virtual float area() = 0; 
};

class C_Rectangle : public C_Polygon {
    float width, height;

public:
    C_Rectangle(float w, float h) : width(w), height(h) {}

    float area() override {
        return width * height;  
    }
};

class C_Triangle : public C_Polygon {
    float base, height;

public:
    C_Triangle(float b, float h) : base(b), height(h) {}

    float area() override {
        return 0.5 * base * height;  
    }
};

int main() {
    
    C_Polygon* poly1;
    C_Polygon* poly2;

    C_Rectangle rect(5, 3);  
    C_Triangle tri(4, 6);    

    poly1 = &rect;
    poly2 = &tri;

    cout << "Area of Rectangle: " << poly1->area() << endl;
    cout << "Area of Triangle: " << poly2->area() << endl;

    return 0;
}
