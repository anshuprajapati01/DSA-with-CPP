#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 5.5;

    // 1. Implicit (Apne aap int se double ban gaya)
    cout << "Implicit: " << a + b << endl; // Output: 15.5

    // 2. Explicit (Humne zabardasti double ko int banaya)
    cout << "Explicit: " << (int)b << endl;  // Output: 5

    return 0;
}
