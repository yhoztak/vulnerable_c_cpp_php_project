#include <iostream>

void resourceLeakExample() {
    int* leakMemory = new int(42); // Memory allocated but not freed
    std::cout << "Memory leak example: " << *leakMemory << std::endl; // Resource leak
    // Note: delete leakMemory; // Memory is never freed
}

int main() {
    resourceLeakExample();
    return 0;
}