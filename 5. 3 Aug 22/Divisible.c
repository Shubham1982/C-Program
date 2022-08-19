#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("\nEnter you no : ");
    scanf("%d",&n);
    if (n%5==0 && n%3==0){
        printf("\nNo is Divisible By 5 and 3.");
    }
    if(n%5==0){
        printf("\nNo is Divisible By 5.");
    }
    if(n%3==0){
        printf("\nNo is Divisible By 3");
    }
    else if(n%5!=0 && n%3!=0){
        printf("\nNo isn't Divisible By 5 and 3");
    }

    return 0;
}