#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    int temp =0;
    int i;
    int j;
    printf("\nEnter array.");
    for (i = 0; i<5;i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i<4; i++){
        for(j = i + 1; j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted array is : ");
    for (i = 0; i<5;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
    