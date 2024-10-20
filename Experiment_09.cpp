#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char* str;

public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~MyString() {
        delete[] str;
    }

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    bool operator==(const MyString& other) const {
        return strcmp(str, other.str) == 0;
    }

    MyString operator+(const MyString& other) const {
        MyString newString;
        delete[] newString.str;
        newString.str = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newString.str, str);
        strcat(newString.str, other.str);
        return newString;
    }

    void display() const {
        cout << str;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");
    MyString str3;

    // String Copy using =
    str3 = str1;
    cout << "Copied String: ";
    str3.display();
    cout << endl;

    // Equality Check using ==
    cout << "Are str1 and str2 equal? " << (str1 == str2 ? "Yes" : "No") << endl;

    // Concatenation using +
    MyString str4 = str1 + str2;
    cout << "Concatenated String: ";
    str4.display();
    cout << endl;

    return 0;
}
