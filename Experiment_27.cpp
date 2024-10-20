#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int intArray[] = {10, 5, 3, 7, 2};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Original int array: ";
    displayArray(intArray, intSize);
    sortArray(intArray, intSize);
    cout << "Sorted int array: ";
    displayArray(intArray, intSize);
    
    float floatArray[] = {10.5, 5.2, 3.9, 7.1, 2.3};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    cout << "\nOriginal float array: ";
    displayArray(floatArray, floatSize);
    sortArray(floatArray, floatSize);
    cout << "Sorted float array: ";
    displayArray(floatArray, floatSize);

    double doubleArray[] = {9.81, 3.14, 6.28, 1.62, 5.0};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "\nOriginal double array: ";
    displayArray(doubleArray, doubleSize);
    sortArray(doubleArray, doubleSize);
    cout << "Sorted double array: ";
    displayArray(doubleArray, doubleSize);

    char charArray[] = {'Z', 'A', 'K', 'M', 'B'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    cout << "\nOriginal char array: ";
    displayArray(charArray, charSize);
    sortArray(charArray, charSize);
    cout << "Sorted char array: ";
    displayArray(charArray, charSize);

    int* ptrArray[] = {new int(50), new int(20), new int(30), new int(40), new int(10)};
    int ptrSize = sizeof(ptrArray) / sizeof(ptrArray[0]);
    cout << "\nOriginal pointer array: ";
    for (int i = 0; i < ptrSize; ++i) {
        cout << *ptrArray[i] << " ";
    }
    cout << endl;

    sortArray(ptrArray, ptrSize); 

    cout << "Sorted pointer array: ";
    for (int i = 0; i < ptrSize; ++i) {
        cout << *ptrArray[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < ptrSize; ++i) {
        delete ptrArray[i];
    }

    return 0;
}
