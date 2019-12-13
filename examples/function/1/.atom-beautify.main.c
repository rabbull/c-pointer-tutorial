#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*p) (int, int) = add;
    printf("%d\n%d\n%d\n%d\n", 
    (int) add
);
}
