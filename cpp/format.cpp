#include <iostream>

void formatStringExample() {
    char userInput[100];
    std::cout << "Enter a format string: ";
    std::cin >> userInput;
    printf(userInput); // Vulnerable to format string attack
}

int main() {
    formatStringExample();
    return 0;
}