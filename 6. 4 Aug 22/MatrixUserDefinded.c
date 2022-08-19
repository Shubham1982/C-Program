#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[3][3];
    printf("\nEnter Your Matrix.\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    // For printing

    printf("\nFor Printing Matrix.\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
}