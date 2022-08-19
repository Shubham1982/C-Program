#include<stdio.h>
#include<stdlib.h>
int choice1, choice2, order;
int i = 0, qty, rate, total = 0;
int k = 0;
char snacksArray[6][20]={{"Poha"},{"Kachori"},{"Paper Dosa"},{"Samosa"},{"Idaly Sambar"},{"Wada Pav"}};
char snacksPrint[20][20];
int main(){
    Menu:
    printf("\n**********************Veg Hotel Menu**********************\n");
    printf("\n\t      1. Snacks        2. Meal\n");
    printf("What do you want : ");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1 :
            Snacks:
            printf("\n********************Snacks Menu********************\n");
            printf("\n\t    1. Poha       -20Rs      4. Samosa       -15Rs\n");
            printf("\n\t    2. Kachori    -17Rs      5. Idaly Sambar -25Rs\n");
            printf("\n\t    3. Paper Dosa -25Rs      6. Wada Pav     -15RS\n");
            printf("\nWhat do you want to order : ");
            scanf("%d",&order);
            switch(order){
                case 1: //Poha
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 20;
                        total = rate * qty + total;
                        snacksPrint[k]= snacksArray[0];
                        k++;
                        break;
                case 2: //Kachori
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 17;
                        total = rate * qty + total;
                        break;
                case 3: //Paper Dosa
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 25;
                        total = rate * qty + total;
                        break;
                case 4: //Samosa
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 15;
                        total = rate * qty + total;
                        break;
                case 5: //Idaly Sambar
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 25;
                        total = rate * qty + total;
                        break;
                case 6: //Wada Pav
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 15;
                        total = rate * qty + total;
                        break;
            }//switch order ends
            printf("\nGo again to Snacks - Press 1 : \n");
            printf("\nGo to Meal Press - 2 :\n");

            scanf("%d",&choice2);
            if (choice2 == 1){
                goto Snacks;
            }
            else if(choice2 == 2){
                goto Menu;
            }
            break;

    case 2 :
            Meal:
            printf("\n********************Meal Menu********************\n");
            printf("\n\t        ---Starter---                 ---Meal---\n");
            printf("\n\t   1. Masala Papad  -15Rs    4. Paneer Veg   -150Rs\n");
            printf("\n\t   2. Veg Soup      -20Rs    5. Dal Tadka    -120Rs\n");
            printf("\n\t   3. Fry Papad     -15Rs    6. Chhole Veg   -130Rs\n");
            printf("\nWhat do you want to order : ");
            scanf("%d",&order);
            switch(order){
                case 1: //Masala Papd
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 15;
                        total = rate * qty + total;
                        break;
                case 2: //Veg Soup
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 20;
                        total = rate * qty + total;
                        break;
                case 3: //Fry Papad
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 15;
                        total = rate * qty + total;
                        break;
                case 4: //Paneer Veg
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 150;
                        total = rate * qty + total;
                        break;
                case 5: //Dal Tadka 
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 120;
                        total = rate * qty + total;
                        break;
                case 6: //Chhole Veg
                        printf("\nQuantity : ");
                        scanf("%d",&qty);
                        rate = 130;
                        total = rate * qty + total;
                        break;
            }//switch order ends
            printf("\nGo to Snacks - Press 1 : \n");
            printf("\nGo agian to Meal Press - 2 :\n");
            scanf("%d",&choice2);
            if (choice2 == 1){
                goto Meal;
            }
            break;

            
    
    default:
        break;
    }//Switch ends here:


    printf("\ntotal : %d", total);
    for(int i =0 ;i < k; i++){
        printf("\n%s",snacksArray[i]);
    }
    

}