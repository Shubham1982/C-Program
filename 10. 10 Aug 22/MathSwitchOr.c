#include<stdio.h>
#include<conio.h>//This is for getch.
//Or operation in switch .
int main(){
    int z,k;
    int r;float Area;int a, b,x,n1,n2,a1;
    menu:
    printf("\nc or C-Area of Circle\nt or T-Area of Triangle\ns or S-Area of Square\n");
    printf("\nEnter choice : ");
    z=getch();
    switch (z)
    {
    case 'c'://1-Area of Circle
    case 'C'://In switch there no OR like(||)so, we used this<==
        
        
        printf("\nEnter radius of Circle : ");
        scanf("%d",&r);
        Area = 3.14 * r * r;
        printf("\nArea of Circle is :%.2f",Area);
        break;
    case 't'://2-Area of Triangle
    case 'T'://
        
        printf("\nEnter Base of Triangle : ");
        scanf("%d",&a);
        printf("\nEnter height of Trinagle : ");
        scanf("%d",&b);
        
        Area = 0.5 * a * b;
        printf("\nArea of Triangle is :%.2f",Area);
        break;
    case 's'://3-Area of Square
    case 'S':
        
        printf("\nEnter side of square: ");
        scanf("%d",&a1);
       

        
        Area = a1 * a1;
        printf("\nArea of Square is :%.2f",Area);
        
        break; 
    default:
        printf("\nCase does not match : ");
        break;
    }
    printf("\n Want to continue Press y or Y:\n");
    k = getch();
    if((k=='y') || (k=='Y')){
        goto menu;
    }
    return 0;
}