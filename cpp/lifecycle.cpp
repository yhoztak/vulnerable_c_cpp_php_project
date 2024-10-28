#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Resource acquired." << std::endl; }
    ~Resource() { std::cout << "Resource released." << std::endl; }
};

void insecureObjectLifecycleExample() {
    Resource* resource = new Resource();
    // Resource never released; memory leak occurs
}

int main() {
    insecureObjectLifecycleExample();
    return 0;
}