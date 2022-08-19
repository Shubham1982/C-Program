#include<stdio.h>
#include<stdlib.h>
int main(){

    //matrix 1

    int mat1[3][3];
    printf("\nEnter Your Matrix1.\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    //matrix 2

    int mat2[3][3];
    printf("\nEnter Your Matrix2.\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    // Third matrix.

    int SumMatrix[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            SumMatrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // For printing

    printf("\nSum of you Matrix.\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            printf("%5d",SumMatrix[i][j]);
        }
        printf("\n");
    }
}