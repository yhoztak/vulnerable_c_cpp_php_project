#include <iostream>

void outOfBoundsAccessExample() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "Out-of-bounds access: " << arr[10] << std::endl; // Out-of-bounds access
}

int main() {
    outOfBoundsAccessExample();
    return 0;
}