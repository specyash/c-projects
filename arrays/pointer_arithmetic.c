#include <stdio.h>

int main() {
    int i = 47;
    int* ptr = &i;

    printf("Pointer before increment: %lu\n", (unsigned long)ptr);
    ptr++;
    printf("Pointer after increment: %lu\n", (unsigned long)ptr);

    return 0;
}
