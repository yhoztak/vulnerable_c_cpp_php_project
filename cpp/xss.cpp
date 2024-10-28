#include <iostream>
#include <string>

void xssExample() {
    std::string userInput;
    std::cout << "Enter some HTML: ";
    std::getline(std::cin, userInput);
    
    // Vulnerable to XSS
    std::cout << "You entered: " << userInput << std::endl; // Outputs raw HTML
}

int main() {
    xssExample();
    return 0;
}