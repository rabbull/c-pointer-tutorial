#include <stdio.h>
#include <stdint.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*p) (int, int) = add;
    printf("10 + 5 = %d\n", p(10, 5));
}
