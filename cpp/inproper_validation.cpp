#include <iostream>
#include <string>

void improperInputValidationExample() {
    std::string userInput;
    std::cout << "Enter a number: ";
    std::getline(std::cin, userInput);
    int number = std::stoi(userInput); // Vulnerable to improper input validation
    std::cout << "You entered: " << number << std::endl;
}

int main() {
    improperInputValidationExample();
    return 0;
}