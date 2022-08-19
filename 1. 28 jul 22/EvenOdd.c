#include<stdio.h>
#include<stdlib.h>
int main (){

    int arr[5];
    int i;
    int even = 0;
    int odd = 0;
    printf("Enter any five number in array :");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    printf("\nElements in array are :\n");      
    for (i = 0; i<5; i++){
        printf("%5d",arr[i]);
    }
    printf("\nEven %d",even);
    printf("\nOdd %d",odd);
    return 0;
}