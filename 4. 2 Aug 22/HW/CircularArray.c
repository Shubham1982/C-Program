#include<stdio.h>
#include<stdlib.h>
void Change(int arr[], int n){
    int temp = arr[n-1];
    // printf("%d",temp);
    for (int i =n-2; i>=0;i--){
        
        arr[i+1]=arr[i];
             
    }
    arr[0]=temp;

}
void PrintArray(int arr[], int n){
    // printf("\nOpertion has been performed on given array : ");
    for (int i =0; i<n;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int main(){
    // int arr[5]={10, 20, 30, 40, 50};
    int arr[20];
    int n;
    printf("\nEnter Array size : ");
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    
    for(int i = 0;i<n;i++){
        Change(arr,n);
        PrintArray(arr,n);
    }
    
    // Change(arr,n);
    // Change(arr,n);
    // Change(arr,n);
    // Change(arr,n);
}