#include <stdio.h>

int main(void)
{
    const char text[] = "Python Programming";
    int length = 0;

    for (int index = 0; text[index] != '\0'; index++) {
        printf("%c\n", text[index]);

        if (text[index] != ' ') {
            length++;
        }
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}