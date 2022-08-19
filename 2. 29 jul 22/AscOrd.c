#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    printf("\nEnter array.");
    for (int i = 0; i<5;i++){
        scanf("%d", &arr[i]);
    }
    int i;
    int max=arr[0];
    int min=arr[0];

    for (i = 0; i<5;i++){
        
        if (arr[i]<min){
            min=arr[i];
            printf("\n%d",min);
            
        } 
        else if (arr[i]>max){
            max=arr[i];
        }      
    }
}