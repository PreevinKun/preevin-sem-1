#include <stdio.h>
int main() {
    int i, j, count = 0;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            if (i * j > 6)
                break;
            count++;
            printf("%d ", i * j);
        }
        printf("| ");
    }

    printf("\nCount = %d\n", count);
    return 0;
}