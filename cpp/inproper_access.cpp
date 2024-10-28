#include <iostream>

void accessControlExample(int userRole) {
    if (userRole == 1) { // User role 1 has admin access
        std::cout << "Admin access granted." << std::endl;
    } else {
        std::cout << "Access denied." << std::endl; // No proper checks for other roles
    }
}

int main() {
    int userRole = 2; // Non-admin user
    accessControlExample(userRole); // Should be denied but lacks proper checks
    return 0;
}