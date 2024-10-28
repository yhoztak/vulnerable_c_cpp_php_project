#include <iostream>

int& returnLocalVariable() {
    int localVariable = 42;
    return localVariable; // Returning a reference to a local variable
}

int main() {
    int& value = returnLocalVariable();
    std::cout << "Value: " << value << std::endl; // Undefined behavior
    return 0;
}