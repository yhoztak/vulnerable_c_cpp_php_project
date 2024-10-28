
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buffer_overflow_example() {
    char buffer[10];
    printf("Enter a string (max 9 characters): ");
    gets(buffer); // Vulnerable to Buffer Overflow
    printf("You entered: %s\n", buffer);
}

void format_string_vulnerability() {
    char input[100];
    printf("Enter some text: ");
    scanf("%s", input);
    printf(input); // Vulnerable to Format String Attack
    printf("\n");
}

void insecure_file_handling() {
    char filename[256];
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return;
    }
    
    char content[100];
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);
}

int main() {
    int choice;
    
    printf("Vulnerability Examples in C:\n");
    printf("1. Buffer Overflow\n");
    printf("2. Format String Vulnerability\n");
    printf("3. Insecure File Handling\n");
    printf("Choose an option (1-3): ");
    
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            buffer_overflow_example();
            break;
        case 2:
            format_string_vulnerability();
            break;
        case 3:
            insecure_file_handling();
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
