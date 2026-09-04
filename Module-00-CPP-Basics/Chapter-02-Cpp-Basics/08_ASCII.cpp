#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 5.5;
    char ch = 'A'; // ASCII code ke liye

    // 1. Implicit (Apne aap convert hua)
    cout << "Implicit: " << a + b << endl; // Output: 15.5

    // 2. Explicit (Zabardasti int banaya)
    cout << "Explicit: " << (int)b << endl;  // Output: 5

    // 3. ASCII Conversion (Char ko Int mein badla)
    cout << "ASCII value of " << ch << " is: " << (int)ch << endl; // Output: 65

    return 0;
}
