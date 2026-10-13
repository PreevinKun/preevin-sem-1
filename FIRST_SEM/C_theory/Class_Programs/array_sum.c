#include <stdio.h>

int read_array_size(void);
int validate_array_size(int s);

int main(void) {
    int s, sum = 0;

    do {
        s = read_array_size();
    } while (!validate_array_size(s));

    int arr[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < s; i++) {
        printf("array elements are %d\n", arr[i]);
    }

    printf("Sum of array elements is: %d\n", sum);

    return 0;
}

int read_array_size(void) {
    int s1;
    printf("Enter the size of the array: [Size should be greater than 4]\n");
    scanf("%d", &s1);
    return s1;
}

int validate_array_size(int s) {
    if (s < 5) {
        printf("Invalid input. Please try again.\n");
        return 0;
    }
    return 1;
}