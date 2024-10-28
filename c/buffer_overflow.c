#include <stdio.h>
#include <string.h>

void buffer_overflow_example() {
    char buffer[10];
    printf("Enter a string (max 9 characters): ");
    gets(buffer); // Dangerous: Vulnerable to buffer overflow
    printf("You entered: %s\n", buffer);
}

int main() {
    buffer_overflow_example();
    return 0;
}