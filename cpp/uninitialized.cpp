#include <iostream>

void uninitializedVariableExample() {
    int uninitializedVariable; // Uninitialized variable
    std::cout << "Uninitialized variable value: " << uninitializedVariable << std::endl; // Undefined behavior
}

int main() {
    uninitializedVariableExample();
    return 0;
}