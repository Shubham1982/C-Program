#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = 0, b = 1, n;
    printf("\nEnter no here : \n"); 
    scanf("%d",&n);
    printf("Serise is : %d %d",a,b);
    for (int i = 1; i<=n; i++){
        int sum = a + b;
        printf(" %d",sum);
        a =b;
        b=sum;

    }
    return 0;
}
