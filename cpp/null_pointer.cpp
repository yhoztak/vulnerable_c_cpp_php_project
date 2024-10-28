include <iostream>

void nullPointerDereferenceExample() {
    int* ptr = nullptr;
    std::cout << "Dereferencing null pointer: " << *ptr << std::endl; // Vulnerable to null pointer dereference
}

int main() {
    nullPointerDereferenceExample();
    return 0;
}