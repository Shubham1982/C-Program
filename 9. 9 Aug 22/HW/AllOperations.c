#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void factor(int a){
        printf("\nFators are : ");
        for (int i = 1; i<=a; i++){
                if(a%i==0){
                        printf(" %d",i);
                }       
        }
}
void factorial(int a){
    int res = 1 ;
    for (int i =1; i <= a; i++){
        res = res * i ;
    }
    printf("\nFactorial of %d is : %d",a,res);
}

void prime(int a){
        int b = 0;
        for (int i = 2; i<a; i++){
                if (a%i==0){
                       b= 1;
                       break;
                }
        }
        if(b==1){
                printf("\nIt is Not Prime Number.");
        }
        else{
                printf("\nIt is Prime Number.");
        }
}
void power(int a){
        int b;
        float result;
        int c = a;
        printf("\nEnter power : ");
        scanf("%d",&b);
        result = pow(c, b);
        printf("\n result : %.2f",result);
}
void reverse(int a){
        int rev=0;
        while(a!=0){
        int digit = a%10;
        rev = (rev * 10)+ digit;
        a = a/10;
        }
        printf("\nreverse no is : %d",rev);   
}
void sum(int a){
        int c = a;
        int sum = 0;
        while(c!=0){
                int digit= c%10;
                sum = sum + digit;
                c = c/10;
        }
        printf("\nSum of %d is : %d",a,sum);

}
int main(){
    int n, a, ch;
    menu:
    printf("\nEnter no Here : ");
    scanf("%d", &n);
    do{
    printf("\n1-factor\n2-factorial\n3-prime\n4-power\n5-reverse\n6-sum");
    printf("\nEnter here : ");
    scanf("%d",&a);
    
    switch(a){
        case 1: 
                factor(n);
                break;
        case 2: 
                factorial(n);
                break;
        case 3: 
                prime(n);
                break;
        case 4: 
                power(n);
                break;
        case 5: 
                reverse(n);
                break;

        case 6:
                sum(n);
                break;
        default :
                printf("\nYou have entered wrong choice..");
    }//switch ends
    printf("\nFor Continue Press 1:");
    printf("  Give another Number Press 2:\n");
    scanf("%d", &ch);
    if (ch == 2){
        goto menu;
    }
    }//do ends
    while(ch==1);
    
    return 0;
}