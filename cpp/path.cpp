#include <iostream>
#include <fstream>

void pathTraversalExample(const std::string& filename) {
    std::ifstream file("data/" + filename); // Vulnerable to path traversal
    if (!file) {
        std::cout << "File not found." << std::endl;
        return;
    }
    std::cout << "File opened successfully." << std::endl;
}

int main() {
    std::string filename;
    std::cout << "Enter filename to read: ";
    std::getline(std::cin, filename);
    pathTraversalExample(filename); // User can input ../../etc/passwd
    return 0;
}