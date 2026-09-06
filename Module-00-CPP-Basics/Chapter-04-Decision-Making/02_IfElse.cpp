#include <iostream>

bool isValidTriangle(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    return false;
}

int main() {
    double a = 3.0, b = 4.0, c = 5.0;
    
    if (isValidTriangle(a, b, c)) {
        std::cout << "This is a valid triangle.\n";
    } else {
        std::cout << "This is not a valid triangle.\n";
    }
    
    return 0;
}
