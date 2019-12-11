#include <stdio.h>

int main() {
    int i = 0xDAEDBEAF;
    int *pi = &i;
    size_t size = sizeof(pi) * 8;

    printf("size:   %lu bit(s)\n", size);
    printf("value:  %p\n", pi);
    printf("memory: %X\n", *pi);
}
