#include <stdio.h>
#define LEN 10

int main() {
    int arr[LEN] = {0};
    int i;
    for (i = 0; i < LEN; ++i) {
        printf(
            "location of arr[%d]: %p\n",
            i, &arr[i]
        );
    }
    printf("\nvalue of arr: %p\n", arr);
}
