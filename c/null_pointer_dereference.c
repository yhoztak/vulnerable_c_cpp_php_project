#include <stdio.h>

void null_pointer_example() {
    int *ptr = NULL;
    printf("Dereferencing null pointer: %d\n", *ptr);  // Vulnerable to null pointer dereference
}

int main() {
    null_pointer_example();
    return 0;
}