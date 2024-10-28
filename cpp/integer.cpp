#include <iostream>
#include <limits>

void integerOverflowExample() {
    unsigned int maxValue = std::numeric_limits<unsigned int>::max();
    maxValue += 1; // Integer overflow
    std::cout << "Integer Overflow: " << maxValue << std::endl;
}

int main() {
    integerOverflowExample();
    return 0;
}