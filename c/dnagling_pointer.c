#include <stdio.h>
#include <stdlib.h>

void use_after_free_example() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr); // Memory freed, but pointer still used
    printf("Dangling pointer access: %d\n", *ptr);  // Use-After-Free
}

int main() {
    use_after_free_example();
    return 0;
}