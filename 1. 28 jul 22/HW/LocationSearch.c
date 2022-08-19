#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    printf("\nEnter array.");
    for (int i = 0; i<5;i++){
        scanf("%d", &arr[i]);
    }
    int n;
    int x;
    int count;
    printf("\n Enter no : ");
    scanf("%d", &n);
    for (int i = 0; i<5;i++){
        if(arr[i]==n){
            x=1;
            count = i;
            break;
        }
        
    }
    if(x==1){
        printf("\nNumber Found At %d Index", count);
    }
    else{
        printf("\nNumber couldn't Found.");
    }
    
}