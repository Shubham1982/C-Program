#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 0;
    int Union[10];
    int set1[5]={1, 2, 3, 4, 5};
    int set2[5]={1, 6, 3, 7, 8};
    for(int i =0; i<5; i++){
        Union[i] = set1[i]; 
        for(int j= 0; j<5;j++){
            Union[n]=set1[i];
            if (set1[i]!=set2[j]){
                Union[n+4]=set2[j];
            }
            n++;
            
        }
    }
    for(int i =0; i<n; i++){
        printf("  %d",Union[i]);
    }
    
}