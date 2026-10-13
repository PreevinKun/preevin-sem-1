#include <stdio.h>
int linear_search(int arr[], int n, int key){
    for (int i=0;i<n;i++){
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main (){
 
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
 
    int pos = linear_search(arr, n, key);
 
    if (pos != -1)
        printf("%d found at index %d\n", key, pos);
    else
        printf("%d not found in the array\n", key);
 
    return 0;
}


