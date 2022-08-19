#include<stdio.h>
#include<stdlib.h>
int main(){

    int set1[20], set2[20], Intersection[20];
    int n1, n2, x;

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

    // Intersection

    
    // for(int i= 0; i<n1; i++){
    //     Union[k]=set1[i];
    //     k++;
    // }
    

    int k=0;
    for(int j=0; j<n2; j++){
        
        for(int i = 0; i<n1; i++){
            if (set2[j]==set1[i]){
                Intersection[k] = set1[i];
                k++;
            }
        }
    }
    printf("\nIntersection of set1 and set2 is : ");
    for (int i =0; i<k;i++){
        printf(" %d",Intersection[i]);
    }



    


}