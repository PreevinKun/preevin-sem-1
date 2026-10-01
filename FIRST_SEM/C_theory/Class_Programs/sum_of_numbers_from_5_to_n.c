#include <stdio.h>
int main (){
    int count;
    int c;
    int sum=0;
    printf("Enter the n value");
    scanf("%d",&c);
    if (c<5){
        printf("please enter a no greater than 5");
    }
    else{
        for(count=5;count<=c; count++)
        sum=sum+count;
    }
    if (c>=5)
    printf("the sum of n numbers are %d",sum);


    return 0;
}