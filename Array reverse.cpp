#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {5, 6, 7, 22, 3, 1, 4, 6, 0, 3, 6, 6, 2, 2, 5};
    
    cout << "Original array: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << "\n\nReversed array: ";
    
    auto startPtr = numbers.begin();
    auto endPtr = numbers.end() - 1;
    
    while (endPtr >= startPtr) {
        cout << *endPtr << " ";
        --endPtr;
    }
    
    cout << "\n\nAlternative reverse: ";
    reverse(numbers.begin(), numbers.end());
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    
    cout << endl;
    
    return 0;
}