#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", (void *)&x);
    printf("%p\n", (void *)p);

    return 0;
}