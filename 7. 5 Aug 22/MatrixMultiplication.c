// Rules for matrix multiplication
// 1- mat 1 coloumn = mat 2 row
// 2- resultant matrix = row of mat1 * coloumn of mat2
// 3- for initiating mat3, it should be 0 to all values, 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat1[2][3],mat2[3][4],mat3[2][4]={0};

    // Matrix 1
    printf("\nEnter Matrix1  2 x 3 : ");
    for(int i = 0; i<2; i++){
        for(int j = 0;j<3; j++){
        scanf("%d",&mat1[i][j]);
        }
    }

    // Matrix 
    printf("\nEnter Matrix1  3 x 4 : \n");
    for(int i = 0; i<3; i++){
        for(int j = 0;j<4; j++){
        scanf("%d",&mat2[i][j]);
        }
    }

    // Multiplication

    for(int i =0; i<2; i++){
        for(int k = 0; k<4; k++){
            for (int j = 0; j<3; j++){
                mat3[i][k] = mat3[i][k] + mat1[i][j]*mat2[j][k];
            }
        }
    }
    // For printing
    printf("\n-------------------Result Matrix-------------------\n");
    for(int i = 0; i<2 ; i++){
        for (int j = 0; j<4; j++){
            printf(" %d",mat3[i][j]);
        }
        printf("\n");
    }

}