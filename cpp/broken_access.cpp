#include <iostream>

void brokenAccessControlExample(int userId) {
    // Assume userId should only allow access to the specific user data
    std::cout << "Accessing data for user ID: " << userId << std::endl; // Vulnerable to IDOR
    // Proper access control should be implemented
}

int main() {
    int userId = 1; // Example user ID
    brokenAccessControlExample(userId);
    return 0;
}