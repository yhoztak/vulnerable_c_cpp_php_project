#include <iostream>
#include <string>
#include <mysql/mysql.h> // Example using MySQL library

void sqlInjectionExample() {
    std::string userInput;
    std::cout << "Enter your username: ";
    std::getline(std::cin, userInput);
    
    // Vulnerable to SQL Injection
    std::string query = "SELECT * FROM users WHERE username = '" + userInput + "'";
    
    // Execute query...
    std::cout << "Executing query: " << query << std::endl;
}

int main() {
    sqlInjectionExample();
    return 0;
}