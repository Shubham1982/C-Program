#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int j = 0;
    int k = 0;
    int array[10];
    int EvenArray[10];
    int OddArray[10];
    //Declaring Array Size
    printf("\nEnter size of Array : ");
    scanf("%d", &n);
    // Creating Array

    printf("\nEnter an Array here : ");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    
    //Seperate array from single array
    for(i = 0; i< n; i++){
        if (array[i]%2==0){
            EvenArray[j]=array[i];
            j++;
        }
        else{
            OddArray[k]=array[i];
            k++;
        }
    }

    //Printing Even Odd Array

    printf("\nEven Array : ");
    for (i = 0; i < j; i++){
        printf(" %d",EvenArray[i]);
    }
    printf("\nOdd Array : ");
    for (i = 0; i < k; i++){
        printf(" %d",OddArray[i]);
    }
}