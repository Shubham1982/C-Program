#include<stdio.h>

int main(){
    int a;
    printf("\nEnter any number : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nMon");
        break;
    case 2:
        printf("\nTue");
        break;
    case 3:
        printf("\nWed");
        break;
    case 4:
        printf("\nThu");
        break;
    case 5:
        printf("\nFri");
        break;
    case 6:
        printf("\nSat");
        break;
    case 7:
        printf("\nSun");
        break;
    
    
    default:
        printf("\nCase does not match : ");
        break;
    }
    return 0;
}