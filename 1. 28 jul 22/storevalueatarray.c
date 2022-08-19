#include<stdio.h>
#include<stdlib.h>
int main (){

    int arr[5];
    int i;
    printf("Enter any five number in array :");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are :\n");
    for (i = 0; i<5; i++){
        printf("%5d",arr[i]);
    }
    printf("\nReverse array :\n");
    for (i = 4; i>=0; i--){
        printf("%5d",arr[i]);
    }
    return 0;
}