#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string filename = "readmefile";
    
    cout << "Original string: " << filename << endl;
    cout << "Length: " << filename.length() << " characters" << endl;
    cout << endl;
    
    cout << "Forward traversal (pointer style): ";
    const char* forwardPtr = filename.c_str();
    while (*forwardPtr != '\0') {
        cout << *forwardPtr;
        forwardPtr++;
    }
    cout << endl;
    
    cout << "Reverse traversal (pointer arithmetic): ";
    const char* reversePtr = filename.c_str() + filename.length() - 1;
    while (reversePtr >= filename.c_str()) {
        cout << *reversePtr;
        reversePtr--;
    }
    cout << endl;
    
    cout << "Reverse using iterators: ";
    for (auto it = filename.rbegin(); it != filename.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
    
    cout << "Reverse using algorithm: ";
    string reversed = filename;
    reverse(reversed.begin(), reversed.end());
    cout << reversed << endl;
    
    cout << "\nCharacter analysis:" << endl;
    for (size_t i = 0; i < filename.length(); ++i) {
        cout << "Position " << i << ": '" << filename[i] << "'" << endl;
    }
    
    return 0;
}