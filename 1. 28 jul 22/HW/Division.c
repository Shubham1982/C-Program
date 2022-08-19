#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    int D3andD5 = 0;
    int D3 = 0;
    int D5 = 0;
    int NotD3andD5 = 0;
    printf("\nEnter array.");
    for (int i = 0; i<5;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i<5;i++){
        if (arr[i]%3==0 && arr[i]%5==0){
            D3andD5++;
        }

        if (arr[i]%3==0){
            D3++;
        }

        if (arr[i]%5==0){
            D5++;
        }

        if (arr[i]%3!=0 && arr[i]%5!=0){
            NotD3andD5++;
        }
    }
    printf("\nNO divisible by 3 and 5 are : %d",D3andD5);
    printf("\nNO divisible by 3 are : %d",D3);
    printf("\nNO divisible by 5 are : %d",D5);
    printf("\nNO doesn't divisible by 3 and 5 are : %d",NotD3andD5);
    return 0;
}