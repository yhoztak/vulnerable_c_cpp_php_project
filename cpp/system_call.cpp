#include <iostream>
#include <cstdlib>

void insecureSystemCallExample() {
    std::string command;
    std::cout << "Enter a system command: ";
    std::getline(std::cin, command);
    system(command.c_str()); // Vulnerable to command injection
}

int main() {
    insecureSystemCallExample();
    return 0;
}