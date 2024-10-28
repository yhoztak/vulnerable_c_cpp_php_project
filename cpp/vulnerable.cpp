
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

void buffer_overflow_example() {
    char buffer[10];
    std::cout << "Enter a string (max 9 characters): ";
    std::cin >> buffer; // Vulnerable to Buffer Overflow
    std::cout << "You entered: " << buffer << std::endl;
}

void use_after_free_example() {
    int* ptr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }
    
    free(ptr); // Memory freed

    std::cout << "Use after free example:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << ptr[i] << " "; // Accessing memory after it's freed
    }
    std::cout << std::endl;
}

void insecure_file_handling() {
    char filename[256];
    std::cout << "Enter the filename to open: ";
    std::cin >> filename;
    
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Could not open file" << std::endl;
        return;
    }
    
    std::string content;
    while (std::getline(file, content)) {
        std::cout << content << std::endl;
    }
    file.close();
}

int main() {
    int choice;
    
    std::cout << "Vulnerability Examples in C++:\n";
    std::cout << "1. Buffer Overflow\n";
    std::cout << "2. Use After Free\n";
    std::cout << "3. Insecure File Handling\n";
    std::cout << "Choose an option (1-3): ";
    
    std::cin >> choice;
    
    switch (choice) {
        case 1:
            buffer_overflow_example();
            break;
        case 2:
            use_after_free_example();
            break;
        case 3:
            insecure_file_handling();
            break;
        default:
            std::cout << "Invalid choice\n";
    }
    
    return 0;
}
