#include<stdio.h>
#include<stdlib.h>
int main(){

    int set1[20], set2[20], Diff[20];
    int n1, n2;

    printf("Enter size of set1 : ");
    scanf("%d", &n1);

    printf("Enter size of set2 : ");
    scanf("%d", &n2);

    printf("Enter Set1 : ");
    for(int i= 0; i<n1; i++){
        scanf("%d",&set1[i]);
    }

    printf("Enter Set2 : ");
    for(int i= 0; i<n2; i++){
        scanf("%d",&set2[i]);
    }

    // Difference
    int k=0;
    // for(int i= 0; i<n1; i++){
    //     Union[k]=set1[i];
    //     k++;
    // }
    int i;
    for(i = 0; i<n1; i++){
        int x = 1;
        for(int j=0; j<n2; j++){
            if (set1[i]==set2[j]){
                x=0;
                break;
            }
        }
        if(x){
            Diff[k]=set1[i];
            k++;
            }
    }
    printf("\nDiff bet set1 and set2 : ");
    for (int i =0; i<k;i++){
        printf(" %d",Diff[i]);
    }



    


}