#include <iostream>

void useAfterFreeExample() {
    int* ptr = new int(42);
    delete ptr; // Memory freed
    std::cout << "Use after free: " << *ptr << std::endl; // Undefined behavior
}

int main() {
    useAfterFreeExample();
    return 0;
}