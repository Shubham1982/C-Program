#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    printf("\nEnter array.");
    for (int i = 0; i<5;i++){
        scanf("%d", &arr[i]);
    }
    
    int n;
    int i;
    int count=0;
    int nextnumber = 0;
    int min=0;
    int max=0;
    for (i = 0; i<5;i++){
        int x=i;
        int a= x;
        int b= x+1;
        nextnumber = a + b;
        if (arr[a]>arr[b]){
            max=arr[a];
            min=arr[b];
            
        }
        else if (arr[i]<min){
            max=arr[b];
            max=arr[a];
            
        }
        a= b;
        b=nextnumber;
    }
    printf("\nMax is %d",count);
}