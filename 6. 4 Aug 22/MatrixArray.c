#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[3][3] = {
                        {11,12,13},
                        {14,15,16},
                        {17,18,19}
    };
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            printf("  %d",mat[i][j]);
        }
        printf("\n");
    }
}