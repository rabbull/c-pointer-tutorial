#include <stdlib.h>
#include <time.h>

static int __initialized = 0;

static void initialize() {
    time_t t;
    srand((unsigned) time(&t));
    __initialized = 1;
}

int randi(int min, int max) {
    if (!__initialized) {
        initialize();
    }
    return rand() % (max - min) + min;
}

float randf() {
    if (!__initialized) {
        initialize();
    }
    return rand() / (float) RAND_MAX;
}
