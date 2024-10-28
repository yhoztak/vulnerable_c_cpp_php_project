#include <iostream>
#include <map>
#include <string>

std::map<std::string, int> loginAttempts;

void loginExample(const std::string& username) {
    if (loginAttempts[username] >= 3) {
        std::cout << "Account locked due to too many login attempts." << std::endl;
        return;
    }
    // Simulate login process...
    loginAttempts[username]++; // Increment login attempts
    std::cout << "Login attempt for: " << username << std::endl; // No rate limiting implemented
}

int main() {
    std::string username = "user1";
    loginExample(username);
    loginExample(username);
    loginExample(username);
    loginExample(username); // Exceeds rate limit but no lockout mechanism
    return 0;
}