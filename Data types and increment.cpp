#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template<typename T>
void demonstratePointerBehavior(const string& typeName, T value) {
    T* pointer = &value;
    
    cout << "=== " << typeName << " DATA TYPE ===" << endl;
    cout << "Original value: " << value << endl;
    cout << "Pointer address: " << pointer << endl;
    cout << "Dereferenced value: " << *pointer << endl;
    cout << "Variable address: " << &value << endl;
    
    T* originalPtr = pointer;
    pointer++;
    
    cout << "After increment:" << endl;
    cout << "  New address: " << pointer << endl;
    cout << "  Address difference: " << (pointer - originalPtr) << " positions" << endl;
    cout << "  Memory offset: " << sizeof(T) << " bytes" << endl;
    cout << "  Dereferenced (undefined): " << *pointer << endl;
    cout << endl;
}

int main() {
    cout << fixed << setprecision(2);
    
    int integerValue = 140;
    demonstratePointerBehavior("INTEGER", integerValue);
    
    float floatValue = 14.75f;
    demonstratePointerBehavior("FLOAT", floatValue);
    
    double doubleValue = 40.25;
    demonstratePointerBehavior("DOUBLE", doubleValue);
    
    bool booleanValue = true;
    demonstratePointerBehavior("BOOLEAN", booleanValue);
    
    cout << "Note: Dereferencing incremented pointers accesses undefined memory!" << endl;
    cout << "This demonstration shows pointer arithmetic behavior across data types." << endl;
    
    return 0;
}