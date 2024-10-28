#include <iostream>
#include <fstream>

void insecureTempFileExample() {
    std::ofstream tempFile("/tmp/tempfile.txt"); // Insecure temp file creation
    tempFile << "Sensitive data"; // Potential race condition if accessed by other users
    tempFile.close();
}

int main() {
    insecureTempFileExample();
    return 0;
}