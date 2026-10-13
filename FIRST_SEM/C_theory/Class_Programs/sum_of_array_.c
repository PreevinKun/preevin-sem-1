#include <stdio.h>

int sum(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[0] + sum(arr + 1, size - 1);
}

int main() {
    int s;
    printf("enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    
    for (int i = 0; i < s; i++) {
        printf("enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("the sum of array is %d\n", sum(arr, s));
    return 0;
}