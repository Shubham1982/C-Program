#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    printf("\nEnter any character : ");
    scanf("%c",&ch);

    if((ch>=65) && (ch<=90)){
            printf("\n%c is Capital character",ch);
    }
    else if ((ch>=97) && (ch<=122)){
        
        printf("\n%c is small character",ch);
    }
    else if ((ch>=48) && (ch<=57)){
        printf("\n%c is Number ",ch);
    }
    else{
        printf("\n%c is Other character",ch);
    }
    printf("\nAscii for %c is %d",ch,ch);

}