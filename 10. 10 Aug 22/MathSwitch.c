#include<stdio.h>

int main(){
    int z,k;
    int r;float Area;int a, b,x,n1,n2;
    menu:
    printf("\n1-Area of Circle\n2-Area of Triangle\n3-Area of Square\n4-Area of Rectangle\n");
    printf("\nEnter choice : ");
    scanf("%d",&z);
    switch (z)
    {
    case 1://1-Area of Circle
        
        
        printf("\nEnter radius of Circle : ");
        scanf("%d",&r);
        Area = 3.14 * r * r;
        printf("\nArea of Circle is :%.2f",Area);
        break;
    case 2://2-Area of Triangle
        
        printf("\nEnter Base of Triangle : ");
        scanf("%d",&a);
        printf("\nEnter height of Trinagle : ");
        scanf("%d",&b);
        
        Area = 0.5 * a * b;
        printf("\nArea of Triangle is :%.2f",Area);
        break;
    case 3://3-Area of Square
        
        printf("\nEnter side of square: ");
        scanf("%d",&a);
       

        
        Area = a * a;
        printf("\nArea of Square is :%.2f",Area);
        
        break;
    case 4://4-Area of rectangle
        
        printf("\nEnter length : ");
        scanf("%d",&n1);
        printf("\nEnter Breadth : ");
        scanf("%d",&n2);
        Area = n1 * n2;
        printf("\n Area of Rectangle is : %.2f",Area);
        break;  
    default:
        printf("\nCase does not match : ");
        break;
    }
    printf("\n Want to continue Press 1:\n");
    scanf("%d",&k);
    if(k==1){
        goto menu;
    }
    return 0;
}