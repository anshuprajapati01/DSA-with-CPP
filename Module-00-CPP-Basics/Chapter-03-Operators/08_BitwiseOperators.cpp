#include <iostream>
using namespace std;

int main() {
    // Declaring sample integers
    // In binary: a = 5  (00000101)
    // In binary: b = 3  (00000011)
    int a = 5;
    int b = 3;

    cout << "--- Bitwise Operators Demo in C++ ---" << endl;
    cout << "Initial values: a = " << a << ", b = " << b << "\n\n";

    // 1. Bitwise AND (&) - 1 if both bits are 1
    cout << "1. Bitwise AND (a & b)   : " << (a & b) << "  (Binary: 00000001)" << endl;

    // 2. Bitwise OR (|) - 1 if at least one bit is 1
    cout << "2. Bitwise OR (a | b)    : " << (a | b) << "  (Binary: 00000111)" << endl;

    // 3. Bitwise XOR (^) - 1 if bits are different
    cout << "3. Bitwise XOR (a ^ b)   : " << (a ^ b) << "  (Binary: 00000110)" << endl;

    // 4. Bitwise NOT (~) - Inverts all bits (flips 0 to 1 and 1 to 0)
    cout << "4. Bitwise NOT (~a)      : " << (~a)    << " (Depends on system representation)" << endl;

    // 5. Bitwise Left Shift (<<) - Shifts bits left, filling with 0s (multiplies by 2^n)
    cout << "5. Left Shift (a << 1)   : " << (a << 1) << " (Binary: 00001010)" << endl;

    // 6. Bitwise Right Shift (>>) - Shifts bits right (divides by 2^n)
    cout << "6. Right Shift (a >> 1)  : " << (a >> 1) << "  (Binary: 00000010)" << endl;

    return 0;
}
