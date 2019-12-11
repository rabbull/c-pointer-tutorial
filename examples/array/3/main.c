#include <stdio.h>
#define LEN 6

int main() {
    int arr[LEN] = {1, 2, 3, 4, 5, 6};
    int * const p = arr;
    int i;
    printf("%lu %lu\n", sizeof(p), sizeof(arr));
    for (i = 0; i < LEN; ++i) {
        printf("%d", arr[i]);
    } printf("\n");
    for (i = 0; i < LEN; ++i) {
        printf("%d", p[i]);
    } printf("\n");
}
