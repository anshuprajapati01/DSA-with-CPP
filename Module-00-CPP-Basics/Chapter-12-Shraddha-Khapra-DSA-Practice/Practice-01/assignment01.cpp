#include <iostream>

int main() {
    std::cout << "Multiples of 3 between 10 and 50 are:\n";

    // Start at 12 and increase by 3 each time
    for (int i = 12; i <= 50; i += 3) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}
