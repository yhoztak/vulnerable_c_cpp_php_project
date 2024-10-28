#include <stdio.h>

void format_string_example() {
    char user_input[100];
    printf("Enter a format string: ");
    gets(user_input);
    printf(user_input); // Vulnerable to format string attack
}

int main() {
    format_string_example();
    return 0;
}