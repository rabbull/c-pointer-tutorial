#include <stdio.h>
#define PTR(loc) ((void*)(loc))

int main() {
    int *pi = PTR(0x100);
    int *pii = pi + 1;
    printf("%p %p\n", pi, pii);

    char *pc = PTR(0x200);
    char *pcc = pc + 1;
    printf("%p %p\n", pc, pcc);
}
