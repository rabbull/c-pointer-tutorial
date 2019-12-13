#include <stddef.h>

void sort(
    void* array,
    size_t elem_width,
    size_t length,
    int (*comp)(void* p, void* q)
);
