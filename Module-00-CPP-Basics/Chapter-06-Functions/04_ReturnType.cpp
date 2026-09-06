#include <iostream>

// The function has an 'int' return type. It immediately returns the math result.
int square(int number) {
    return number * number; 
}

int main() {
    // We print the result directly without creating any extra variables
    std::cout << square(5); 

    return 0;
}
