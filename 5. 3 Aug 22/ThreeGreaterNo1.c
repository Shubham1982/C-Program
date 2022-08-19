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
    else if( (x==y)&&(x>z)){
        printf("\n%d and %d are equal and greater than %d",x,y,z);
    }
    else if( (x==z)&&(x>y)){
        printf("\n%d and %d are equal and greater than %d",x,z,y);
    }
    else if( (y==z)&&(y>x)){
        printf("\n%d and %d are equal and greater than %d",y,z,x);
    }
    else{
        printf("\nAll no.s are same");
    }
    return 0;
}