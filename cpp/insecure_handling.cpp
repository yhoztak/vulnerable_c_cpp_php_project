#include <iostream>
#include <fstream>

void insecureFileHandlingExample() {
    std::ofstream file("important.txt");
    if (!file) {
        std::cout << "Could not open file\n";
        return;
    }
    file << "Sensitive data\n"; // Insecure: No proper permissions check
    file.close();
}

int main() {
    insecureFileHandlingExample();
    return 0;
}