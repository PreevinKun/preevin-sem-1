#include <stdio.h>
int main (){
    char s[8]= "Preevin";
    char a[30];
    char myname[100];
    // printf("enter your name     :");
    // scanf("%29s", a);
    //printf("Hello %s!\n",a);
    printf("enter a string     :");
    fgets(myname, sizeof(myname), stdin);
    printf("you entered   : %s",myname);


    return 0;
}