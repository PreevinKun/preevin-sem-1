#include <stdio.h>
int main(){
    int i,size,pos, value;
    printf("enter size of the array:  ");
    scanf ("%d", &size);
    int arr[size];
    for (i=0; i<size-1; i++){
        printf("enter the element %d : ",i+1);
        scanf("%d",&arr[i]);


    }
    printf("array elements are :\n");
    for (i=0; i<size-1; i++){
        
        printf("%d\n",arr[i]);
    }

    printf ("enter the element to be inserted  :");
    scanf("%d",&value);
    printf("enter the position of the element");
    scanf("%d",&pos);
    for(i=size-1;i>=pos-1; i--){
        if (i==pos-1) arr[i]=value;
        else arr[i]=arr[i-1];


    }
    printf("array elements after insertion are :\n");
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }


}