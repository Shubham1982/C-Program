// Type 3
#include<stdio.h>
// Without argument with return type...

int AreaOfRectangle(){
    int n1, n2, Area;
    printf("\nEnter length : ");
    scanf("%d",&n1);
    printf("\nEnter Breadth : ");
    scanf("%d",&n2);
    Area = n1 * n2;
    return Area;
}
int main(){
    int x;
    x = AreaOfRectangle();
    printf("\n Area of Rectangle is : %d",x);
}


