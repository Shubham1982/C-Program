#include<stdio.h>
#include<stdlib.h>
int main (){

    int arr[5];
    int i;
    int even = 0;
    int evensum = 0;
    int oddsum = 0;
    int odd = 0;
    printf("Enter any five number in array :");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        if (arr[i]%2==0){
            even++;
            evensum = evensum + arr[i];
        }
        else{
            odd++;
            oddsum = oddsum + arr[i];
        }
    }
    
    printf("\nElements in array are :\n");      
    for (i = 0; i<5; i++){
        printf("%5d",arr[i]);
    }
    printf("\nEven %d sum of even numbers are : %d",even,evensum);
    printf("\nEven %d sum of odd numbers are : %d",odd,oddsum);
    return 0;
}