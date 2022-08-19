#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,z;
    printf("Enter First No : ");
    scanf("\n%d",&x);
    printf("Enter Second No : ");
    scanf("\n%d",&y);
    printf("Enter Third No : ");
    scanf("\n%d",&z);

    if (x>y && x>z){
        printf("\nGreater No is : %d",x);
    }
    else if (y>x && y>z){
        printf("\nGreater No is : %d",y);
    }
    else if (z>x && z>y){
        printf("\nGreater No is : %d", z);
    }
    else{
        printf("\nAll no.s are same");
    }
    return 0;
}