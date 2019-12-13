#include "sort.h"

static inline void
swap(void* p, void* q, size_t size) {
    char* _p = p;
    char* _q = q;
    char tmp = 0;
    while (size-- > 0) {
        tmp = *_q;
        *_q++ = *_p;
        *_p++ = tmp;
    }
}

void sort(
    void* array,
    size_t elem_width,
    size_t length,
    int (*comp) (void* p, void* q)
) {  // 实际上就是个冒泡排序
    char* _arr = (char*) array;
    int i, j;
    void *p, *q;
    for (i = 0; i < length; ++i)
        for (j = 0; j < length - i - 1; ++j) {
            p = _arr + j * elem_width;
            q = p + elem_width;
            if (comp(p, q)) {  // if (p > q)
                swap(p, q, elem_width);
            }
        }
}
