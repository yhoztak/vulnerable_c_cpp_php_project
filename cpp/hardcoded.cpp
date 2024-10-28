#include <iostream>

void hardcodedSecretsExample() {
    std::string apiKey = "1234567890abcdef"; // Hardcoded API key
    std::cout << "API Key: " << apiKey << std::endl; // Exposes sensitive data
}

int main() {
    hardcodedSecretsExample();
    return 0;
}