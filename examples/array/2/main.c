#include <stdio.h>
#define LEN 10

int main() {
    int arr[LEN] = {0};
    int i;
    for (i = 0; i < LEN; ++i) {
        int *p = &arr[i];
        int *q = arr + i;
        printf("%p %p %d\n", p, q, p == q);
    }
}
