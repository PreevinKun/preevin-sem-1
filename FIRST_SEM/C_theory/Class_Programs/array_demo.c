#include <stdio.h>
int main(){
    int my_marks [5];
    int sub [5];
    sub [0]= 80;
    sub [1]= 78;
    sub [2]= 68;
    sub [3]= 58;
    sub [4]= 88;
    
    for(int i=0; i<5; i++){
        printf("Subject %d mark is %d\n",i+1,sub[i]);
    }


    for (int i=0; i<5; i++){
        printf("Enter your marks for subject %d: ", i+1);
        scanf("%d", &my_marks[i]);
    }
    
    
    
    
    for (int i=0;i<5;i++){
        printf("my sub %d marks: %d\n",i+1,my_marks[i]);
    }





}