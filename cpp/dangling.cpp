#include <iostream>

void danglingPointerExample() {
    int* ptr = new int(42);
    delete ptr; // Memory freed
    std::cout << "Dangling pointer access: " << *ptr << std::endl; // Undefined behavior
}

int main() {
    danglingPointerExample();
    return 0;
}