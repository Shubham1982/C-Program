#include<stdio.h>

int main(){
    int a,b,add,sub,mul,rem,c,k;
    float div;
    menu:
    printf("\nEnter any  two number : ");
    scanf("%d%d",&a,&b);
    continue1:
    printf("\n1-Add\n2-Sub\n3-Mul\n4-Div\n5-rem");
    printf("\nChoice operation : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        add = a + b;
        printf("\nAddition of %d and %d is : %d",a,b,add);
        break;
    case 2:
        sub = a - b;
        printf("\nSubstraction of %d and %d is : %d",a,b,sub);
        break;
    case 3:
        mul = a* b;
        printf("\nMultiplication of %d and %d is : %d",a,b,mul);
        break;
    case 4:
        div = a/b;
        printf("\nDivision of %d and %d is : %.2f",a,b,div);
        break;
    case 5:
        rem = a%b;
        printf("\nRemainder of %d and %d is : %d",a,b,rem);
        break;
    default:
        printf("\nCase does not match : ");
        break;
    }
    printf("\nDo you want to continue Press 1 :");
    printf("   Want to re-enter no Press 2:\n");
    scanf("%d",&k);
    if(k==1){
        goto continue1;
    }
    if(k==2){
        goto menu;
    }
    return 0;
}