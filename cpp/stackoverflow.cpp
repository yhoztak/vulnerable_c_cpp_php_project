#include <iostream>

void recursiveFunction(int count) {
    std::cout << "Recursion depth: " << count << std::endl;
    recursiveFunction(count + 1); // Vulnerable to stack overflow
}

int main() {
    recursiveFunction(1);
    return 0;
}