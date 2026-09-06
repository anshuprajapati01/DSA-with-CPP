#include <iostream>
using namespace std;

// 1. Inline Function (Fixed: removed the duplicate 'inline' keyword)
inline int square(int n) {
    return n * n;
}

// 2. Function Overloading (Same name, different parameters)
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// 3. Default Arguments (Trailing parameters have default values)
int multiply(int a, int b = 2) {
    return a * b;
}

// 4. Pass by Value (Copies the actual value)
void passByValue(int x) {
    x = 100;
}

// 5. Pass by Reference (Modifies the original variable using &)
void passByReference(int &x) {
    x = 200;
}

// 6. Pass by Pointer (Modifies the original variable using memory address)
void passByPointer(int *x) {
    *x = 300;
}

// 7. Return by Reference (Returns a reference to a variable)
int& chooseLarger(int &a, int &b) {
    if (a > b) return a;
    else return b;
}

// 8. Recursive Function (Function calls itself)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Testing Inline & Overloading
    cout << "Square of 5 (Inline): " << square(5) << endl;
    cout << "Add integers (Overload 1): " << add(10, 20) << endl;
    cout << "Add doubles (Overload 2): " << add(5.5, 4.5) << endl;

    // Testing Default Arguments
    cout << "Multiply with default (5 * 2): " << multiply(5) << endl;
    cout << "Multiply custom (5 * 4): " << multiply(5, 4) << endl;

    // Testing Parameter Passing Mechanisms
    int val = 10;
    
    passByValue(val);
    cout << "After Pass by Value: " << val << " (Unchanged)" << endl;

    passByReference(val);
    cout << "After Pass by Reference: " << val << " (Changed)" << endl;

    passByPointer(&val);
    cout << "After Pass by Pointer: " << val << " (Changed)" << endl;

    // Testing Return by Reference
    int x = 15, y = 20;
    chooseLarger(x, y) = 99; // Modifies the larger variable (y)
    cout << "Modified y via Return by Reference: " << y << endl;

    // Testing Recursion
    cout << "Factorial of 5 (Recursive): " << factorial(5) << endl;

    return 0;
}
