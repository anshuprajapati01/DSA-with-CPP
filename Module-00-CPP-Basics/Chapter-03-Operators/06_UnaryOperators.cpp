#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Initial value of a: " << a << endl;
    cout << "Initial value of b: " << b << endl;
    cout << "-----------------------------------" << endl;

    // 1. Unary Increment Operator (++)
    a++; 
    cout << "Value of a after a++ (Increment): " << a << endl;

    // 2. Unary Decrement Operator (--)
    b--; 
    cout << "Value of b after b-- (Decrement): " << b << endl;

    // 3. Unary Minus Operator (-) -> Changes the sign
    int c = -a; 
    cout << "Value of c (-a): " << c << endl;

    return 0;
}
