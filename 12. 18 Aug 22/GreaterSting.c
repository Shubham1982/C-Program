#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name1[10];
    char name2[10];
    int i, count1 = 0,count2 = 0;
    printf("\nEnter first name here : ");
    scanf("\n%s", name1);//string doesn't need & sign.
    for( i = 0; name1[i]!='\0'; i++){
        count1++;
    }
    printf("\nEnter second name here : ");
    scanf("\n%s", name2);//string doesn't need & sign.
    for( i = 0; name2[i]!='\0'; i++){
        count2++;
    }
    printf("\nGreater no of string is : ");
    if(count1>count2){
        for(int i =0 ; i<count1;i++){
            printf("%c",name1[i]);
        }
    }
    else{
        for(int i =0 ; i<count2;i++){
            printf("%c",name2[i]);
        }
    }
 return 0;
}