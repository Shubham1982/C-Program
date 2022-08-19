#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch1,ch2,c;
    float amount, result, source;
    menu:
    printf("\n1-Rupee\n2-Dollar\n3-Euro");
    printf("\nEnter Your choice : ");
    scanf("%d",&ch1);

    switch(ch1){
        case 1 : 
                printf("\nEnter your choice to convert your currency. ");
                printf("\n1-Rupee\n2-Dollar\n3-Euro");
                printf("\nEnter your choice : ");
                scanf("%d",&ch2);
                printf("\nEnter your amount : ");
                scanf("%f",&source);
                if(ch2==1){
                    result = source;
                    printf("\n%.2f Rupee = %.2f Rupee",source,result);
                }
                else if(ch2==2){
                    result = source/79;
                    printf("\n%.2f Rupee = %.2f Dollar",source,result);
                }
                else if(ch2==3){
                    result = source/80;
                    printf("\n%.2f Rupee = %.2f Euro",source,result);
                }
                else{
                    printf("\nYou have entered wrong no.");
                }
                break;

        case 2 : 
                printf("\nEnter your choice to convert your currency. ");
                printf("\n1-Rupee\n2-Dollar\n3-Euro");
                printf("\nEnter your choice : ");
                scanf("%d",&ch2);
                printf("\nEnter your amount : ");
                scanf("%f",&source);
                if(ch2==1){
                    result = source*79;
                    printf("\n%.2f Dollar = %.2f Rupee",source,result);
                }
                else if(ch2==2){
                    result = source;
                    printf("\n%.2f Dollar = %.2f Dollar",source,result);
                }
                else if(ch2==3){
                    result = source*0.98;
                    printf("\n%.2f Dollar = %.2f Euro",source,result);
                }
                else{
                    printf("\nYou have entered wrong no.");
                }
                break;

        case 3 :
                printf("\nEnter your choice to convert your currency. ");
                printf("\n1-Rupee\n2-Dollar\n3-Euro");
                printf("\nEnter your choice : ");
                scanf("%d",&ch2);
                printf("\nEnter your amount : ");
                scanf("%f",&source);
                if(ch2==1){
                    result = source*80;
                    printf("\n%.2f Euro = %.2f Rupee",source,result);
                }
                else if(ch2==2){
                    result = source*1.02;
                    printf("\n%.2f Euro = %.2f Dollar",source,result);
                }
                else if(ch2==3){
                    result = source;
                    printf("\n%.2f Euro = %.2f Euro",source,result);
                }
                else{
                    printf("\nYou have entered wrong no.");
                }
                break;
        default :

            printf("\nYou have entered wrong no.")   ;
    }
    printf("\nDo you want to continue : ");
    scanf("%d",&c);
    if (c==1){
        goto menu;
    }
    return 0;
}
