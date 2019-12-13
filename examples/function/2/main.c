#include "sort.h"
#include "rand.h"
#include <stdio.h>

#define LEN 10

typedef struct Apple {
    float weight;
    char brand[16];
} Apple;

int apple_comp(void* a, void* b);

int main() {
    Apple apples[LEN];
    for (int i = 0; i < LEN; ++i) {
        apples[i].weight = (float) randi(10, 100);
        printf("Apple %d weighs %.1f.\n",
                            i, apples[i].weight);
    }
    sort(apples, sizeof(Apple), LEN, apple_comp);
    printf("\nafter sorting:\n");
    for (int i = 0; i < LEN; ++i) {
        printf("Apple %d weighs %.1f.\n",
                            i, apples[i].weight);
    }
}

int apple_comp(void* a, void* b) {
    Apple* _a = a;
    Apple* _b = b;
    return _a->weight > _b->weight;
}
