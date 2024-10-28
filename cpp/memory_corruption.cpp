#include <iostream>

void memoryCorruptionExample() {
    int* ptr = new int(10);
    delete ptr; // Free memory
    *ptr = 20; // Memory corruption: accessing freed memory
}

int main() {
    memoryCorruptionExample();
    return 0;
}