#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    int temp = arr[4];
    // printf("%d",temp);
    for (int i =3; i>=0;i--){
        
        arr[i+1]=arr[i];
             
    }
    arr[0]=temp;
    for (int i =0; i<5;i++){
        printf(" %d", arr[i]);
    }
}