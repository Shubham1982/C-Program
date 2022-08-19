#include<stdio.h>
#include<stdlib.h>

int main(){
    int no;
    printf("\nEnter your no : ");
    scanf("\n%d",&no);
    if (no>0){
        printf("\nNo is Positive.");
    }
    else if (no<0){
        printf("\nNo is Negative.");
    }
    else{
        printf("\nNo is Zero.");
    }
    return 0;
}