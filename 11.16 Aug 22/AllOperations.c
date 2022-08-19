#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#1
void factor(int a){
        printf("\nFators are : ");
        for (int i = 1; i<=a; i++){
                if(a%i==0){
                        printf(" %d",i);
                }       
        }
}
//#2
void factorial(int a){
    int res = 1 ;
    for (int i =1; i <= a; i++){
        res = res * i ;
    }
    printf("\nFactorial of %d is : %d",a,res);
}
//#3
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
//#4
void power(int a){
        int b;
        float result;
        int c = a;
        printf("\nEnter power : ");
        scanf("%d",&b);
        result = pow(c, b);
        printf("\n result : %.2f",result);
}
//#5
void reverse(int a){
        int rev=0;
        while(a!=0){
        int digit = a%10;
        rev = (rev * 10)+ digit;
        a = a/10;
        }
        printf("\nreverse no is : %d",rev);   
}
//#6
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
//#7
void palindrome(int n){
        int rev=0, digit;
        int a = n;
        while (a != 0) {
        digit = a % 10;
        rev = (rev * 10) + digit;
        a =a/10;
        }
        if (n == rev){
        printf("%d is a palindrome.", n);
        }
        else{
        printf("%d is not a palindrome.", n);
        }    
}
//#8
void fibonacciSeries(int n){
        int a = 0, b = 1;
        printf("Serise is : %d %d",a,b);
        for (int i = 1; i<=n; i++){
                int sum = a + b;
                printf(" %d",sum);
                a =b;
                b=sum;
        }
}
//#9
void perfect(int n){
        int sum = 0;
        printf("\nFators are : ");
        for (int i = 1; i<n; i++){
                if(n%i==0){
                        sum = sum + i;
                }       
        }
        if (sum==n){
                printf("\n%d is a Perfect Number.",n);
        }
        else{
                printf("\n%d is Not a Perfect Number.",n);
        }
}
//#10
void neon(int n){
        int c = n;
        int sum = 0;
        while(c!=0){
                int digit= c%10;
                sum = sum + digit;
                c = c/10;
        }
        int square = sum * sum;
        if (square==n){
                printf("\n%d is a neon number .\n",n);
        }
        else{   
                printf("\n%d is not a neon number .\n",n);
        }
}
int main(){
    int n, a, ch;
    menu:
    printf("\nEnter no Here : ");
    scanf("%d", &n);
    do{
    printf("\n1-factor\n2-factorial\n3-prime\n4-power\n5-reverse\n6-sum\n7-palindrome\n8-fibonacci series\n9-perfect no\n10-Neon no");
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
        case 7:
                palindrome(n);
                break;
        case 8:
                fibonacciSeries(n);
                break;
        case 9:
                perfect(n);
                break;
        case 10:
                neon(n);
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