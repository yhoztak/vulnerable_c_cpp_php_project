#include <stdio.h>
#include <stdlib.h>

void command_injection_example() {
    char command[100];
    printf("Enter a shell command: ");
    gets(command); // Vulnerable to command injection
    system(command); // Dangerous: Executes unsanitized input
}

int main() {
    command_injection_example();
    return 0;
}