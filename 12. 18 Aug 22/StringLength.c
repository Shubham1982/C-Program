#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    int i, count = 0;
    printf("\nEnter your name here : ");
    scanf("\n%s", name);//string doesn't need & sign.
    for( i = 0; name[i]!='\0'; i++){
        count++;
    }
    printf("\nLength of Your name is : %d",count);
 return 0;
}