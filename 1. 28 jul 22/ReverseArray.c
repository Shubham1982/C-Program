#include<stdio.h>
#include<stdlib.h>
int main (){
    int arr[5]={10,20,30,40,50};
    for (int i = 4; i>=0; i--){
        printf("\n%d",arr[i]);
    }
    return 0;
}