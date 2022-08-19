#include<stdio.h>
#include<stdlib.h>
void Change(int arr[], int n){
    int temp = arr[4];
    // printf("%d",temp);
    for (int i =3; i>=0;i--){
        
        arr[i+1]=arr[i];
             
    }
    arr[0]=temp;
    for (int i =0; i<5;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[5]={10, 20, 30, 40, 50};

    for (int i =0; i<5;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");

    
    Change(arr,5);
    Change(arr,5);
    Change(arr,5);
    Change(arr,5);
    Change(arr,5);
}