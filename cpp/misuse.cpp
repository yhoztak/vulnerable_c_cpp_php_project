#include <iostream>
#include <stdexcept>

void misuseOfExceptionHandlingExample() {
    try {
        throw std::runtime_error("An error occurred!");
    } catch (...) {
        std::cout << "Caught an exception, but without proper handling!" << std::endl; // Misuse of exception handling
    }
}

int main() {
    misuseOfExceptionHandlingExample();
    return 0;
}