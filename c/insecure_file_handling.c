#include <stdio.h>

void file_handling_example() {
    FILE *file = fopen("important.txt", "w");
    if (!file) {
        printf("Could not open file\n");
        return;
    }
    fputs("Sensitive data\n", file); // Insecure: No proper permissions check
    fclose(file);
}

int main() {
    file_handling_example();
    return 0;
}