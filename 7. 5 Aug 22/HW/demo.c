#include<stdio.h>
#include<stdlib.h>
int choice1, choice2, order;
int main(){
    printf("\n**********************Veg Hotel Menu**********************\n");
    printf("\n\t      1. Snacks        2. Meal\n");
    printf("What do you want : ");
    scanf("%d",&choice1);
    if(choice1==1){

            snacks:
            printf("\n********************Snacks Menu********************\n");
            printf("\n\t    1. Poha           2. Samosa\n");
            printf("\n\t    3. Kachori        4. Idaly Sambar\n");
            printf("\n\t    5. Paper Dosa     6. Wada Pav\n");
            printf("\nWhat do you want to order : ");
            scanf("%d",&order);
            printf("\nDo you want to order Snacks again. Press 1 : ");
            scanf("%d",choice2);
            if (choice2 == 1){
                goto snacks;
            }
    }

}