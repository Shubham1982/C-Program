// Type 4
#include<stdio.h>
// With argument with return type...

int AreaOfSquare(int n1){
    int Area;
    Area = n1 * n1;
    return Area;
}
int main(){
    int a,x;
    printf("\nEnter side of square: ");
    scanf("%d",&a);
    x = AreaOfSquare(a);
    printf("\n Area of Sqaure: %d",x);
}


