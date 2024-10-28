#include <iostream>

void unvalidatedRedirectExample() {
    std::string redirectUrl;
    std::cout << "Enter URL to redirect: ";
    std::getline(std::cin, redirectUrl);
    // Vulnerable to unvalidated redirects
    std::cout << "Redirecting to: " << redirectUrl << std::endl;
}

int main() {
    unvalidatedRedirectExample();
    return 0;
}