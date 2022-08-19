#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    int i,j,flag=1;
    printf("\nEnter your name here : ");
    scanf("\n%s", name);//string doesn't need & sign.
    for( i = 0; name[i]!='\0'; i++);
    j= i- 1;
    for (i=0;i<j;i++,j--){
        if (name[i]!=name[j]){
            flag=0;
            break;
        }  
    }
    if (flag){
            printf("\nGiven string is palindrome.");
        }
        else{
            printf("\nGiven string is not palindrome.");
        }
 return 0;
}