#include <stdio.h>
int main(){
    int s;
    int sum=0;
    int e;
    for (int i=0;i<1;i++){
        s= read_array_size();
        e= validate_array_size(s);
        if (e== 0){
            printf("Invalid input. Please try again.\n");
            i--;
        }
        
    }
    int arr[s];
    arr,sum= input_array(s);
    
    
    printf("array elements are %d \n",arr);
    printf("Sum of array elements are: %d", sum);



}
int read_array_size(){
    int s1;
    printf("Enter the size of the array: [Size should be greater the 4] \n");
    scanf("%d",&s1);
    return s1;

}
int validate_array_size(int s){
    if (s<5) return 0;
    else return 1;

}int input_array(int s){
    int sum1=0    #include <stdio.h>
    
    int read_array_size(void);
    int validate_array_size(int size);
    int input_array(int arr[], int size);
    
    int main(void) {
        int size = read_array_size();
    
        while (!validate_array_size(size)) {
            printf("Invalid size. Enter a size greater than 4.\n");
            size = read_array_size();
        }
    
        int arr[size];
        int sum = input_array(arr, size);
    
        printf("Array elements are: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    
        printf("\nSum of array elements is: %d\n", sum);
        return 0;
    }
    
    int read_array_size(void) {
        int size;
        printf("Enter the size of the array (greater than 4): ");
        scanf("%d", &size);
        return size;
    }
    
    int validate_array_size(int size) {
        return size >= 5;
    }
    
    int input_array(int arr[], int size) {
        int sum = 0;
    
        for (int i = 0; i < size; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
    
        return sum;
    };
    int arr1 [s];
    for (int i=0;i<s;i++) {
        printf ("Enter element no %d ",i+1);
        scanf("%d",&arr1[i]);
        sum1 +=arr1[i];
    }
    return arr1, sum1;


}