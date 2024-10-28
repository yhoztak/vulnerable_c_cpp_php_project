#include <stdio.h>
#include <limits.h>

void integer_overflow_example() {
    unsigned int max_value = UINT_MAX;
    max_value += 1; // Integer overflow
    printf("Integer Overflow: %u\n", max_value);
}

int main() {
    integer_overflow_example();
    return 0;
}