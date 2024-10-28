#include <iostream>
#include <cstdlib>

void commandInjectionExample() {
    std::string command;
    std::cout << "Enter a shell command: ";
    std::getline(std::cin, command); // Vulnerable to command injection
    system(command.c_str());
}

int main() {
    commandInjectionExample();
    return 0;
}